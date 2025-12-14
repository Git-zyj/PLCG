#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6789;
signed char var_4 = (signed char)-91;
unsigned char var_5 = (unsigned char)200;
short var_7 = (short)-6444;
int var_9 = -1206189330;
int var_10 = 817280445;
unsigned int var_12 = 4095472211U;
int var_13 = -751724303;
int zero = 0;
int var_14 = 1483010209;
short var_15 = (short)-2941;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
