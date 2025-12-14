#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4014642513U;
signed char var_4 = (signed char)35;
unsigned char var_9 = (unsigned char)47;
unsigned char var_13 = (unsigned char)192;
long long int var_14 = 5088558307411899923LL;
signed char var_15 = (signed char)-102;
int zero = 0;
unsigned int var_19 = 1615754153U;
long long int var_20 = 6128945820256284812LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
