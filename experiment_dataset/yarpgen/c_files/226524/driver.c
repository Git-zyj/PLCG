#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5659;
unsigned int var_3 = 497425040U;
unsigned long long int var_4 = 4442875677525259421ULL;
unsigned short var_11 = (unsigned short)15412;
unsigned int var_12 = 3877375381U;
int zero = 0;
signed char var_15 = (signed char)-68;
unsigned long long int var_16 = 14613254083124640465ULL;
unsigned char var_17 = (unsigned char)45;
unsigned int var_18 = 566623588U;
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
