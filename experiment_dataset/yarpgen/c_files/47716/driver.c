#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33929;
unsigned long long int var_5 = 4629533053559788929ULL;
unsigned long long int var_7 = 13854542581671831889ULL;
int var_8 = -414099916;
int zero = 0;
unsigned long long int var_16 = 3285899645897735820ULL;
unsigned long long int var_17 = 9820454562433462053ULL;
unsigned short var_18 = (unsigned short)17480;
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
