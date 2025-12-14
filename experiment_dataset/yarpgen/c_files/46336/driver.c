#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 987688494U;
unsigned long long int var_8 = 15022810249032525611ULL;
int var_10 = -1333610213;
int zero = 0;
unsigned char var_15 = (unsigned char)185;
unsigned long long int var_16 = 4058095498918931633ULL;
unsigned short var_17 = (unsigned short)12750;
int var_18 = 1157712661;
void init() {
}

void checksum() {
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
