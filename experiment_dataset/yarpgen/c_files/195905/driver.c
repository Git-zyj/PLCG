#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
signed char var_5 = (signed char)-8;
unsigned char var_6 = (unsigned char)252;
short var_9 = (short)1198;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-53;
int var_12 = 1477906210;
int zero = 0;
unsigned int var_13 = 955119094U;
unsigned short var_14 = (unsigned short)60579;
int var_15 = -304435356;
unsigned short var_16 = (unsigned short)56633;
signed char var_17 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
