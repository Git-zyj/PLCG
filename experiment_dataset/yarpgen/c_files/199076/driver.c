#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 228036702U;
unsigned int var_3 = 2079459913U;
unsigned short var_4 = (unsigned short)30668;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)61573;
unsigned char var_8 = (unsigned char)48;
short var_10 = (short)24519;
unsigned long long int var_12 = 9355873090819520713ULL;
unsigned short var_13 = (unsigned short)3849;
unsigned int var_14 = 3107059906U;
unsigned int var_15 = 1090055951U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)40;
int zero = 0;
short var_18 = (short)1149;
short var_19 = (short)-16293;
unsigned short var_20 = (unsigned short)59993;
unsigned int var_21 = 1725591534U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
