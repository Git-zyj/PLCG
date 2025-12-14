#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)101;
signed char var_2 = (signed char)63;
unsigned long long int var_4 = 5970185077264936561ULL;
long long int var_6 = -4452595507350132101LL;
unsigned short var_7 = (unsigned short)54133;
unsigned short var_10 = (unsigned short)42467;
unsigned int var_12 = 1348637106U;
unsigned short var_15 = (unsigned short)44717;
unsigned short var_17 = (unsigned short)24673;
int zero = 0;
unsigned short var_19 = (unsigned short)56105;
unsigned short var_20 = (unsigned short)14640;
signed char var_21 = (signed char)-66;
unsigned char var_22 = (unsigned char)8;
short var_23 = (short)-2676;
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
