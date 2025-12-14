#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
int var_9 = 1268700840;
int var_10 = -405122492;
unsigned short var_12 = (unsigned short)62116;
unsigned long long int var_18 = 7645533944894242610ULL;
int zero = 0;
int var_20 = 646875298;
unsigned char var_21 = (unsigned char)109;
short var_22 = (short)19587;
unsigned int var_23 = 230126018U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
