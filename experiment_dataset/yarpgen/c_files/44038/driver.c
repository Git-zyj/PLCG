#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28844;
signed char var_7 = (signed char)-48;
unsigned short var_13 = (unsigned short)23159;
unsigned int var_15 = 601475791U;
int zero = 0;
int var_20 = -493261495;
unsigned short var_21 = (unsigned short)42495;
short var_22 = (short)28576;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
