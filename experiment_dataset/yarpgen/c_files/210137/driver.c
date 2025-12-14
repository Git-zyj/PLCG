#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 914352889U;
unsigned int var_2 = 3376911303U;
int var_4 = 1374329058;
unsigned short var_6 = (unsigned short)18926;
short var_7 = (short)-32672;
long long int var_8 = 4492608857697740548LL;
long long int var_9 = -4080614850334641006LL;
long long int var_10 = -93541473081954208LL;
unsigned char var_11 = (unsigned char)178;
unsigned int var_12 = 55028939U;
unsigned int var_13 = 912051715U;
int zero = 0;
short var_15 = (short)-18179;
unsigned char var_16 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
