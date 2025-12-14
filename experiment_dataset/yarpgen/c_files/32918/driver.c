#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12350;
signed char var_6 = (signed char)-53;
int var_7 = 253915784;
unsigned long long int var_8 = 3517922183990329883ULL;
signed char var_10 = (signed char)-119;
int zero = 0;
unsigned char var_11 = (unsigned char)16;
unsigned short var_12 = (unsigned short)30378;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
