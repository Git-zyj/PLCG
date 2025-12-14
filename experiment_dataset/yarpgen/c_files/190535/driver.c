#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49831;
unsigned int var_1 = 1781548725U;
long long int var_2 = 4094992121309417063LL;
short var_3 = (short)-23019;
short var_4 = (short)-1076;
signed char var_5 = (signed char)93;
unsigned short var_6 = (unsigned short)4911;
short var_7 = (short)-18335;
signed char var_8 = (signed char)-8;
unsigned int var_9 = 2632657731U;
int zero = 0;
unsigned int var_10 = 1438906420U;
unsigned int var_11 = 2441869288U;
short var_12 = (short)10155;
long long int var_13 = 5442314336058523204LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
