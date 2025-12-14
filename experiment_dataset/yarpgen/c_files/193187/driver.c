#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65304;
unsigned char var_2 = (unsigned char)29;
short var_5 = (short)-2938;
unsigned char var_6 = (unsigned char)172;
unsigned int var_7 = 3200160335U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)99;
int var_16 = 1405967559;
unsigned int var_17 = 3998221393U;
unsigned int var_19 = 1494880647U;
int zero = 0;
unsigned short var_20 = (unsigned short)55117;
int var_21 = 1110787599;
unsigned int var_22 = 295406427U;
signed char var_23 = (signed char)-99;
void init() {
}

void checksum() {
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
