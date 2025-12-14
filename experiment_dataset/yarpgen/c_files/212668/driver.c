#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14878;
short var_7 = (short)-130;
unsigned long long int var_10 = 17953331977274925740ULL;
short var_12 = (short)12527;
int zero = 0;
signed char var_14 = (signed char)88;
unsigned char var_15 = (unsigned char)42;
unsigned char var_16 = (unsigned char)120;
unsigned char var_17 = (unsigned char)166;
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
