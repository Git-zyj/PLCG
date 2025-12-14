#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6717475995363492484LL;
signed char var_7 = (signed char)-80;
unsigned int var_12 = 2761426959U;
int zero = 0;
unsigned char var_15 = (unsigned char)112;
unsigned int var_16 = 2910532531U;
short var_17 = (short)-15070;
short var_18 = (short)23998;
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
