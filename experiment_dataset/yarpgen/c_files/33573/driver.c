#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1141877967;
long long int var_1 = 8013254300380273053LL;
unsigned short var_4 = (unsigned short)41961;
int var_5 = -1256906889;
int var_7 = 1346097831;
unsigned char var_8 = (unsigned char)203;
unsigned short var_10 = (unsigned short)5548;
int var_11 = -532315527;
short var_13 = (short)-28073;
int zero = 0;
unsigned short var_15 = (unsigned short)23027;
unsigned short var_16 = (unsigned short)7876;
int var_17 = 2089976329;
int var_18 = -402933106;
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
