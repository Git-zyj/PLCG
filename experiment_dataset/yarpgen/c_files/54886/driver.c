#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-9150;
unsigned int var_4 = 1760734013U;
unsigned short var_5 = (unsigned short)17327;
unsigned int var_6 = 3509785011U;
int var_7 = 1495363866;
int var_8 = -1922697022;
unsigned short var_9 = (unsigned short)16640;
long long int var_12 = -8735474982924747620LL;
int var_16 = 748253094;
signed char var_18 = (signed char)75;
int zero = 0;
int var_20 = 1401737279;
int var_21 = 1805853144;
signed char var_22 = (signed char)-52;
short var_23 = (short)-7285;
unsigned int var_24 = 1672879486U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
