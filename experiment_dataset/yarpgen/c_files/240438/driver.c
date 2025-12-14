#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 299027813U;
unsigned long long int var_3 = 1409136901157217145ULL;
unsigned short var_4 = (unsigned short)50053;
unsigned int var_6 = 2770076015U;
unsigned int var_8 = 3175083918U;
unsigned int var_10 = 2141619829U;
signed char var_11 = (signed char)80;
int zero = 0;
unsigned int var_14 = 174093959U;
int var_15 = 1744515101;
unsigned int var_16 = 101322102U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
