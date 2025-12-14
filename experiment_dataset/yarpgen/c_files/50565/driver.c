#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44668;
unsigned int var_5 = 3409406142U;
unsigned char var_6 = (unsigned char)100;
short var_9 = (short)-3817;
unsigned int var_11 = 225996776U;
unsigned long long int var_13 = 14274322982082147543ULL;
int zero = 0;
signed char var_17 = (signed char)-80;
int var_18 = 672043949;
unsigned char var_19 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
