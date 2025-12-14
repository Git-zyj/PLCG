#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)59;
unsigned char var_3 = (unsigned char)102;
short var_6 = (short)7784;
signed char var_8 = (signed char)6;
unsigned short var_13 = (unsigned short)58148;
int zero = 0;
unsigned long long int var_19 = 17143134452295243127ULL;
signed char var_20 = (signed char)10;
signed char var_21 = (signed char)22;
short var_22 = (short)-9731;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
