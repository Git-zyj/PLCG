#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
unsigned char var_3 = (unsigned char)18;
short var_4 = (short)31908;
unsigned int var_7 = 3672031666U;
short var_8 = (short)16362;
short var_9 = (short)-6857;
unsigned int var_10 = 1695627852U;
unsigned short var_11 = (unsigned short)24759;
unsigned short var_13 = (unsigned short)60506;
unsigned char var_15 = (unsigned char)128;
int zero = 0;
unsigned char var_16 = (unsigned char)165;
short var_17 = (short)26412;
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
