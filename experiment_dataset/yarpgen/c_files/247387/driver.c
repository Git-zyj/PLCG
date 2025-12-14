#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -930744910401003438LL;
signed char var_10 = (signed char)-21;
signed char var_12 = (signed char)-55;
int zero = 0;
short var_14 = (short)26086;
unsigned long long int var_15 = 5717398552938762267ULL;
unsigned int var_16 = 1586520551U;
signed char var_17 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
