#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
unsigned int var_1 = 2799823001U;
unsigned char var_2 = (unsigned char)44;
unsigned short var_3 = (unsigned short)23321;
unsigned long long int var_5 = 15413567996896311889ULL;
unsigned int var_6 = 4205878712U;
int var_7 = -1233740320;
int zero = 0;
int var_10 = 1778312735;
short var_11 = (short)575;
int var_12 = -1632382271;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
