#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37295;
unsigned char var_5 = (unsigned char)244;
_Bool var_6 = (_Bool)1;
short var_7 = (short)4043;
unsigned long long int var_8 = 12692616161749220501ULL;
_Bool var_10 = (_Bool)0;
int var_14 = -1914913283;
int zero = 0;
int var_16 = 1377985448;
unsigned int var_17 = 3110016915U;
unsigned char var_18 = (unsigned char)28;
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
