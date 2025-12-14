#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2425765052U;
unsigned char var_8 = (unsigned char)207;
unsigned char var_9 = (unsigned char)12;
int zero = 0;
signed char var_11 = (signed char)2;
unsigned long long int var_12 = 14930593142732764561ULL;
short var_13 = (short)19379;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
