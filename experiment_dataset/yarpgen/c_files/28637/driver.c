#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)3;
unsigned short var_3 = (unsigned short)51639;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 4078655569U;
unsigned long long int var_7 = 12341703877586427912ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)18532;
unsigned char var_12 = (unsigned char)248;
short var_14 = (short)-7156;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2611656478U;
unsigned int var_19 = 2010779376U;
int var_20 = 474457875;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
