#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59078;
signed char var_1 = (signed char)-122;
unsigned short var_4 = (unsigned short)6633;
unsigned char var_5 = (unsigned char)144;
unsigned char var_6 = (unsigned char)119;
long long int var_8 = -2812953195735687295LL;
unsigned short var_11 = (unsigned short)1710;
long long int var_12 = -6950119976252897555LL;
unsigned int var_13 = 2593737548U;
signed char var_15 = (signed char)-46;
int zero = 0;
long long int var_16 = 3257126414762894341LL;
short var_17 = (short)-4826;
long long int var_18 = 8492233527082140791LL;
int var_19 = -820728871;
unsigned char var_20 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
