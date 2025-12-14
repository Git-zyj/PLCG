#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)41568;
short var_10 = (short)-12050;
unsigned short var_11 = (unsigned short)11396;
int zero = 0;
int var_12 = -1149456420;
signed char var_13 = (signed char)-42;
unsigned char var_14 = (unsigned char)135;
unsigned short var_15 = (unsigned short)23449;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
