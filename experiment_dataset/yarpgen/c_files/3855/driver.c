#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned short var_1 = (unsigned short)51561;
unsigned short var_3 = (unsigned short)40704;
long long int var_4 = -6009364072365222783LL;
int var_6 = -427567226;
int var_8 = -1395917182;
long long int var_10 = -497960058833549517LL;
unsigned int var_11 = 1693700248U;
short var_12 = (short)-12692;
int var_13 = 964168815;
int zero = 0;
long long int var_16 = 1372027019406935626LL;
short var_17 = (short)-20989;
long long int var_18 = -7907311346134641682LL;
int var_19 = 198950041;
unsigned char var_20 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
