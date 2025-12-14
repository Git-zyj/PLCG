#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 2291613990U;
unsigned int var_5 = 44259031U;
short var_7 = (short)8668;
short var_8 = (short)-6124;
int var_13 = 1693147970;
unsigned char var_15 = (unsigned char)9;
unsigned char var_16 = (unsigned char)116;
int zero = 0;
short var_19 = (short)436;
short var_20 = (short)24231;
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
