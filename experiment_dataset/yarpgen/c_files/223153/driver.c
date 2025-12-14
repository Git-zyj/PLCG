#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = 1559194633613798202LL;
long long int var_7 = -4072159983089715351LL;
signed char var_8 = (signed char)37;
unsigned long long int var_9 = 205627927305799401ULL;
unsigned short var_12 = (unsigned short)40359;
int zero = 0;
signed char var_16 = (signed char)-65;
long long int var_17 = -3767428781963607877LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
