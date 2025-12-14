#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12752;
unsigned int var_3 = 452541600U;
unsigned short var_5 = (unsigned short)47873;
unsigned long long int var_10 = 74295166710431426ULL;
unsigned char var_12 = (unsigned char)131;
short var_13 = (short)-23304;
unsigned int var_15 = 513295187U;
int zero = 0;
int var_16 = -236515781;
signed char var_17 = (signed char)-98;
void init() {
}

void checksum() {
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
