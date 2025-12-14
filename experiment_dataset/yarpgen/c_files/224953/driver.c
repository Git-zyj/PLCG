#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
int var_4 = -1808827462;
short var_5 = (short)4807;
unsigned char var_9 = (unsigned char)64;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-13585;
unsigned char var_14 = (unsigned char)55;
int var_15 = 1234093893;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
