#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3660541288U;
unsigned char var_4 = (unsigned char)134;
int var_5 = -433225559;
signed char var_7 = (signed char)-7;
long long int var_14 = 4887033080182488565LL;
int zero = 0;
unsigned char var_16 = (unsigned char)139;
signed char var_17 = (signed char)-42;
void init() {
}

void checksum() {
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
