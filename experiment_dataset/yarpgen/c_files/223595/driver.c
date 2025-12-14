#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 519167725;
_Bool var_3 = (_Bool)1;
long long int var_6 = -6509201621790404071LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)65519;
int var_10 = 1748891670;
short var_11 = (short)-12873;
unsigned short var_12 = (unsigned short)26124;
unsigned short var_17 = (unsigned short)44158;
unsigned short var_18 = (unsigned short)14623;
int zero = 0;
unsigned char var_19 = (unsigned char)160;
short var_20 = (short)-14023;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)96;
unsigned char var_23 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
