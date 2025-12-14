#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21444;
long long int var_1 = 8295845501187369471LL;
int var_6 = -1582356183;
short var_7 = (short)-15717;
short var_8 = (short)-29504;
short var_9 = (short)-2191;
unsigned char var_10 = (unsigned char)104;
unsigned long long int var_12 = 10700204859837165748ULL;
int zero = 0;
unsigned int var_15 = 1443727388U;
int var_16 = 1156253468;
unsigned short var_17 = (unsigned short)47064;
short var_18 = (short)23273;
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
