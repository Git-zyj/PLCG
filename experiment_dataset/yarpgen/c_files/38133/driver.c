#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11310923678237899210ULL;
unsigned long long int var_2 = 3586763082769757714ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 11108265239180484132ULL;
short var_6 = (short)3790;
unsigned short var_7 = (unsigned short)58616;
unsigned int var_8 = 1320524656U;
short var_9 = (short)589;
short var_13 = (short)-2193;
int zero = 0;
unsigned short var_14 = (unsigned short)14327;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
