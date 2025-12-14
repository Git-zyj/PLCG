#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1176092558883260923ULL;
unsigned char var_3 = (unsigned char)31;
unsigned char var_4 = (unsigned char)134;
unsigned long long int var_5 = 801032050342096739ULL;
unsigned short var_7 = (unsigned short)55823;
unsigned short var_9 = (unsigned short)1593;
unsigned char var_10 = (unsigned char)255;
unsigned int var_11 = 1684265266U;
short var_12 = (short)17635;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
unsigned int var_16 = 3611230565U;
long long int var_17 = 3036492123465953849LL;
short var_18 = (short)-7519;
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
