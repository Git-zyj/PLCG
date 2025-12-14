#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8704;
unsigned int var_3 = 3641488206U;
unsigned short var_7 = (unsigned short)47364;
unsigned short var_12 = (unsigned short)37097;
unsigned char var_13 = (unsigned char)166;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-13;
int zero = 0;
signed char var_17 = (signed char)96;
signed char var_18 = (signed char)-80;
short var_19 = (short)12988;
short var_20 = (short)-21488;
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
