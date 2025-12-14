#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29509;
unsigned long long int var_4 = 11010255524695768563ULL;
int var_5 = -389907402;
unsigned char var_8 = (unsigned char)81;
int var_10 = -1487421678;
signed char var_12 = (signed char)70;
short var_13 = (short)-14197;
int var_15 = 200840737;
int zero = 0;
unsigned int var_16 = 4139755032U;
unsigned short var_17 = (unsigned short)12109;
short var_18 = (short)-17513;
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
