#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18654;
unsigned char var_5 = (unsigned char)76;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)6628;
int var_10 = -509060099;
short var_11 = (short)-6208;
unsigned short var_12 = (unsigned short)45030;
int var_14 = 888213616;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = -1018768512;
short var_18 = (short)-20077;
unsigned long long int var_19 = 16453692314780174684ULL;
signed char var_20 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
