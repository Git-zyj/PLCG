#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36867;
short var_3 = (short)-219;
unsigned char var_4 = (unsigned char)162;
unsigned short var_6 = (unsigned short)45388;
unsigned int var_10 = 2723807764U;
int zero = 0;
long long int var_13 = -5504993959238099682LL;
unsigned long long int var_14 = 13941001166522886928ULL;
signed char var_15 = (signed char)71;
unsigned int var_16 = 820841983U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
