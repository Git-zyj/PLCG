#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
signed char var_1 = (signed char)74;
short var_2 = (short)4754;
unsigned int var_3 = 2331877071U;
long long int var_4 = -3512150068672035140LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)1776;
unsigned char var_8 = (unsigned char)42;
unsigned char var_9 = (unsigned char)198;
short var_10 = (short)15853;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-78;
signed char var_14 = (signed char)-13;
int zero = 0;
unsigned int var_16 = 3921209905U;
unsigned short var_17 = (unsigned short)56994;
short var_18 = (short)26896;
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
