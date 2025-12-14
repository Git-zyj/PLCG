#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20579;
short var_2 = (short)11509;
int var_3 = 955502948;
short var_6 = (short)23758;
long long int var_7 = -2051419024158997868LL;
unsigned int var_8 = 2593154015U;
int var_10 = -1705920059;
unsigned short var_11 = (unsigned short)45271;
int var_12 = -1291415675;
short var_13 = (short)31638;
unsigned int var_14 = 1201055068U;
long long int var_15 = 6374501505310565169LL;
unsigned short var_16 = (unsigned short)55370;
int zero = 0;
int var_18 = -94617389;
unsigned short var_19 = (unsigned short)47199;
long long int var_20 = -948082700830912009LL;
void init() {
}

void checksum() {
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
