#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34101;
int var_5 = -2040575400;
signed char var_6 = (signed char)45;
unsigned int var_7 = 2450125140U;
signed char var_8 = (signed char)-9;
int zero = 0;
signed char var_10 = (signed char)-106;
unsigned int var_11 = 2200766487U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
