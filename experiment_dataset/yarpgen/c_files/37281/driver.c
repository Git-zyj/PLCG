#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)62;
signed char var_6 = (signed char)-13;
signed char var_10 = (signed char)13;
unsigned short var_11 = (unsigned short)30744;
int zero = 0;
unsigned char var_12 = (unsigned char)13;
unsigned long long int var_13 = 2660566042696907782ULL;
unsigned long long int var_14 = 4376392699047201167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
