#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8558526007429629707LL;
signed char var_4 = (signed char)70;
unsigned short var_6 = (unsigned short)29530;
unsigned int var_11 = 116391760U;
short var_13 = (short)-16328;
unsigned short var_16 = (unsigned short)44509;
unsigned int var_17 = 1804472256U;
int zero = 0;
short var_19 = (short)22925;
unsigned short var_20 = (unsigned short)45236;
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
