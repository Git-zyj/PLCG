#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20976;
unsigned int var_3 = 3953382092U;
signed char var_4 = (signed char)-15;
unsigned long long int var_6 = 5635515368668070509ULL;
short var_11 = (short)23455;
int zero = 0;
unsigned int var_15 = 496377079U;
unsigned int var_16 = 880447337U;
unsigned char var_17 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
