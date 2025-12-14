#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8460924877421800784ULL;
short var_3 = (short)6866;
unsigned char var_4 = (unsigned char)92;
short var_9 = (short)15284;
unsigned char var_10 = (unsigned char)201;
unsigned char var_11 = (unsigned char)227;
unsigned short var_13 = (unsigned short)11267;
int zero = 0;
unsigned short var_14 = (unsigned short)52909;
unsigned short var_15 = (unsigned short)23063;
int var_16 = -520147130;
unsigned char var_17 = (unsigned char)255;
void init() {
}

void checksum() {
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
