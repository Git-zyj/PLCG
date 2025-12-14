#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -267319510;
unsigned char var_4 = (unsigned char)50;
unsigned short var_5 = (unsigned short)59175;
long long int var_7 = -2693050060816388821LL;
unsigned int var_8 = 3351509491U;
int zero = 0;
short var_14 = (short)24392;
short var_15 = (short)19859;
unsigned short var_16 = (unsigned short)46626;
short var_17 = (short)-32645;
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
