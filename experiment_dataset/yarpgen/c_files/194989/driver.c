#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3353336149U;
int var_2 = 2084105041;
unsigned int var_5 = 208238822U;
unsigned short var_6 = (unsigned short)58070;
int var_12 = 1151646256;
unsigned short var_13 = (unsigned short)23197;
int zero = 0;
unsigned short var_16 = (unsigned short)19525;
unsigned long long int var_17 = 15545805368415210538ULL;
unsigned int var_18 = 2245666495U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
