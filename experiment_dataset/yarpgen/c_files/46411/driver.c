#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34527;
short var_4 = (short)-14065;
unsigned char var_8 = (unsigned char)87;
unsigned char var_15 = (unsigned char)141;
int zero = 0;
unsigned char var_16 = (unsigned char)29;
unsigned short var_17 = (unsigned short)51641;
unsigned int var_18 = 2381506011U;
void init() {
}

void checksum() {
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
