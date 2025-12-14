#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34388;
int var_7 = -1032125783;
signed char var_8 = (signed char)-111;
int var_12 = -319042844;
short var_13 = (short)12570;
int zero = 0;
unsigned char var_15 = (unsigned char)12;
unsigned int var_16 = 1169437673U;
void init() {
}

void checksum() {
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
