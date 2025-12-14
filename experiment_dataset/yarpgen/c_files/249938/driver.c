#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
int var_3 = -880036623;
unsigned int var_8 = 3221083223U;
unsigned long long int var_10 = 12699585823783183284ULL;
unsigned char var_11 = (unsigned char)115;
unsigned char var_12 = (unsigned char)247;
int zero = 0;
unsigned short var_14 = (unsigned short)55319;
unsigned int var_15 = 2020431610U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
