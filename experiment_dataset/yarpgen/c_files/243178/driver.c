#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
int var_1 = -604071874;
unsigned int var_2 = 4106880259U;
long long int var_3 = 4043009380194206923LL;
unsigned short var_5 = (unsigned short)63443;
short var_6 = (short)30442;
int zero = 0;
unsigned char var_11 = (unsigned char)46;
long long int var_12 = -8156039191393479480LL;
short var_13 = (short)-17160;
void init() {
}

void checksum() {
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
