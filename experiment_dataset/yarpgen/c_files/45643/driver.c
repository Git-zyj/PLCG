#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 2627500200719560906ULL;
short var_3 = (short)-23988;
unsigned int var_4 = 3681141138U;
unsigned int var_5 = 2558653218U;
unsigned int var_9 = 2678618955U;
int zero = 0;
signed char var_12 = (signed char)-103;
unsigned char var_13 = (unsigned char)243;
long long int var_14 = -7570082239621804366LL;
unsigned long long int var_15 = 12491874424611586238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
