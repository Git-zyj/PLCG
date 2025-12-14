#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8655684731606849776LL;
unsigned long long int var_2 = 3592739072777258447ULL;
unsigned int var_3 = 435850864U;
int var_6 = -1290999862;
unsigned short var_8 = (unsigned short)3209;
unsigned short var_11 = (unsigned short)56257;
unsigned char var_12 = (unsigned char)55;
long long int var_13 = 6297253577211316866LL;
unsigned char var_17 = (unsigned char)8;
unsigned char var_18 = (unsigned char)85;
int zero = 0;
short var_19 = (short)24710;
long long int var_20 = -3452446375921753042LL;
unsigned long long int var_21 = 6517002841582295928ULL;
int var_22 = 14913265;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
