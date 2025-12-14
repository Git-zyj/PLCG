#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)25;
int var_4 = 2112137480;
unsigned char var_5 = (unsigned char)135;
short var_9 = (short)12393;
signed char var_14 = (signed char)-80;
int zero = 0;
unsigned char var_15 = (unsigned char)190;
short var_16 = (short)-22100;
unsigned short var_17 = (unsigned short)20878;
void init() {
}

void checksum() {
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
