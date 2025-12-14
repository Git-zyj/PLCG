#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1022131807U;
short var_4 = (short)15438;
unsigned short var_5 = (unsigned short)15775;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -47332096;
unsigned int var_12 = 2254491804U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
