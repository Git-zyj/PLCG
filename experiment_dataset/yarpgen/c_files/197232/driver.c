#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
long long int var_2 = -1645476757068053813LL;
unsigned int var_7 = 1848753149U;
unsigned char var_8 = (unsigned char)200;
unsigned char var_11 = (unsigned char)53;
unsigned short var_13 = (unsigned short)52558;
int zero = 0;
long long int var_20 = 7904278172065458717LL;
unsigned long long int var_21 = 2645377455973003579ULL;
unsigned short var_22 = (unsigned short)5715;
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
