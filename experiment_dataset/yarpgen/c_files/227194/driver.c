#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 764583760U;
signed char var_1 = (signed char)-12;
unsigned short var_3 = (unsigned short)46668;
long long int var_5 = -3954815285558440885LL;
unsigned int var_8 = 1800024195U;
int var_10 = -1484375448;
unsigned long long int var_12 = 17378351335578362132ULL;
unsigned short var_14 = (unsigned short)12076;
int zero = 0;
int var_16 = 1703225976;
int var_17 = 1323316500;
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
