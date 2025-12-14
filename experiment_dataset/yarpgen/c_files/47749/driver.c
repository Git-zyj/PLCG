#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10915;
signed char var_2 = (signed char)6;
unsigned char var_3 = (unsigned char)116;
unsigned int var_4 = 1525799922U;
unsigned int var_5 = 3011284561U;
signed char var_7 = (signed char)-88;
signed char var_10 = (signed char)28;
signed char var_11 = (signed char)62;
int zero = 0;
unsigned char var_20 = (unsigned char)36;
signed char var_21 = (signed char)-109;
unsigned char var_22 = (unsigned char)252;
unsigned short var_23 = (unsigned short)36437;
unsigned long long int var_24 = 18242167722093773057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
