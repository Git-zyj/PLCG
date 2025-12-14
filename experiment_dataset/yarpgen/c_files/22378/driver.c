#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54544;
signed char var_10 = (signed char)-35;
unsigned short var_14 = (unsigned short)55941;
signed char var_15 = (signed char)-100;
int zero = 0;
unsigned short var_18 = (unsigned short)28571;
short var_19 = (short)-15970;
int var_20 = 1676078484;
unsigned int var_21 = 2915180457U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
