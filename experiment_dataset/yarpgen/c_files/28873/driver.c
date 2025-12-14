#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1703784784U;
unsigned long long int var_3 = 13885160396918827414ULL;
unsigned char var_5 = (unsigned char)166;
unsigned int var_7 = 1625046685U;
unsigned char var_9 = (unsigned char)162;
unsigned char var_12 = (unsigned char)175;
unsigned char var_14 = (unsigned char)30;
int var_15 = 438012693;
unsigned short var_16 = (unsigned short)12072;
int zero = 0;
int var_19 = 314539166;
unsigned short var_20 = (unsigned short)10318;
unsigned int var_21 = 1798065693U;
unsigned short var_22 = (unsigned short)20786;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
