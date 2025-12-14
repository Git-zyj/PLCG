#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)59;
unsigned short var_7 = (unsigned short)6510;
short var_8 = (short)5396;
unsigned char var_11 = (unsigned char)118;
short var_13 = (short)7841;
short var_14 = (short)-13537;
int zero = 0;
int var_19 = -2006340124;
unsigned char var_20 = (unsigned char)225;
void init() {
}

void checksum() {
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
