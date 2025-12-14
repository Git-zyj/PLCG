#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
int var_3 = 1152259347;
unsigned short var_4 = (unsigned short)44005;
signed char var_5 = (signed char)123;
signed char var_8 = (signed char)-99;
signed char var_9 = (signed char)-117;
long long int var_12 = 1876545854382982726LL;
long long int var_13 = -2684850297912033942LL;
int var_14 = 2075221956;
int zero = 0;
unsigned char var_15 = (unsigned char)212;
unsigned int var_16 = 3356978154U;
unsigned char var_17 = (unsigned char)192;
unsigned short var_18 = (unsigned short)53692;
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
