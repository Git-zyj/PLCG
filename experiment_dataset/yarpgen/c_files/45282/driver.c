#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)231;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)49256;
long long int var_4 = 2703381636120606495LL;
signed char var_6 = (signed char)-119;
unsigned int var_7 = 1585929547U;
unsigned char var_11 = (unsigned char)248;
unsigned int var_13 = 1221804552U;
short var_15 = (short)-12947;
unsigned char var_18 = (unsigned char)60;
int zero = 0;
unsigned short var_19 = (unsigned short)17713;
unsigned short var_20 = (unsigned short)7875;
signed char var_21 = (signed char)-7;
void init() {
}

void checksum() {
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
