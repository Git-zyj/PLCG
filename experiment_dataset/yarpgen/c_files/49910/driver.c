#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)3307;
unsigned short var_7 = (unsigned short)36505;
signed char var_10 = (signed char)-47;
short var_12 = (short)-20436;
unsigned long long int var_13 = 16296749767044499914ULL;
int zero = 0;
signed char var_15 = (signed char)-122;
unsigned short var_16 = (unsigned short)52497;
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
