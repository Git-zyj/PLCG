#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1255041592U;
short var_5 = (short)-3184;
unsigned short var_7 = (unsigned short)34409;
unsigned int var_11 = 4169051390U;
unsigned short var_14 = (unsigned short)60334;
short var_16 = (short)-2883;
int zero = 0;
unsigned long long int var_20 = 9632134478048557855ULL;
unsigned short var_21 = (unsigned short)15214;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
