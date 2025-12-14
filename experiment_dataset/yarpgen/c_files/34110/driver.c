#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9597;
unsigned char var_2 = (unsigned char)225;
signed char var_11 = (signed char)-23;
int var_16 = 1770060723;
int zero = 0;
signed char var_17 = (signed char)-40;
unsigned short var_18 = (unsigned short)17341;
void init() {
}

void checksum() {
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
