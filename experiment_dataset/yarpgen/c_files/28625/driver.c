#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24046;
unsigned char var_13 = (unsigned char)216;
unsigned int var_15 = 2029674799U;
int zero = 0;
signed char var_16 = (signed char)-119;
unsigned int var_17 = 1250095999U;
signed char var_18 = (signed char)-4;
short var_19 = (short)29639;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
