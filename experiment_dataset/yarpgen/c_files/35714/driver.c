#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11579605827346817003ULL;
unsigned short var_8 = (unsigned short)660;
unsigned short var_10 = (unsigned short)13316;
short var_11 = (short)8212;
int zero = 0;
unsigned char var_16 = (unsigned char)83;
signed char var_17 = (signed char)33;
int var_18 = 2045356336;
short var_19 = (short)-26070;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
