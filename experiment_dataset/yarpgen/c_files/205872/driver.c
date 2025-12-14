#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned char var_2 = (unsigned char)45;
signed char var_5 = (signed char)16;
unsigned char var_8 = (unsigned char)107;
unsigned char var_12 = (unsigned char)242;
int var_15 = 1402508556;
int var_16 = -1215892538;
int var_17 = -1531165575;
unsigned char var_18 = (unsigned char)56;
int zero = 0;
int var_20 = -1481149605;
short var_21 = (short)2842;
int var_22 = -27428359;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
