#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)170;
int var_1 = 2116306448;
unsigned int var_3 = 2423528881U;
short var_6 = (short)20846;
unsigned int var_8 = 1167989837U;
unsigned short var_10 = (unsigned short)34359;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)252;
signed char var_15 = (signed char)-70;
signed char var_16 = (signed char)-7;
signed char var_17 = (signed char)-52;
unsigned short var_18 = (unsigned short)13775;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
