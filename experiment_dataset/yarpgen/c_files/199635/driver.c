#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1939856773U;
unsigned int var_2 = 514542369U;
short var_3 = (short)15978;
int var_11 = -25606787;
int zero = 0;
unsigned char var_14 = (unsigned char)129;
long long int var_15 = 7906453629937584402LL;
long long int var_16 = 2448924786067349813LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
