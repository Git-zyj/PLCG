#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1701938815U;
unsigned char var_10 = (unsigned char)248;
short var_13 = (short)-21301;
short var_17 = (short)-18950;
int zero = 0;
int var_18 = -145465774;
signed char var_19 = (signed char)97;
unsigned char var_20 = (unsigned char)45;
int var_21 = 170671581;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
