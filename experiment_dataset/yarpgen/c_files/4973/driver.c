#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55597;
unsigned short var_3 = (unsigned short)36131;
unsigned char var_7 = (unsigned char)227;
long long int var_8 = 6204915868465242012LL;
int var_10 = -219729772;
short var_12 = (short)-25409;
unsigned short var_14 = (unsigned short)41139;
int zero = 0;
int var_16 = 1037387400;
unsigned short var_17 = (unsigned short)17317;
void init() {
}

void checksum() {
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
