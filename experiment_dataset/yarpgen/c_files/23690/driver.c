#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16251;
signed char var_4 = (signed char)56;
unsigned char var_5 = (unsigned char)28;
unsigned char var_7 = (unsigned char)19;
unsigned int var_8 = 2455034206U;
short var_10 = (short)18498;
int zero = 0;
int var_13 = -990621850;
unsigned int var_14 = 145735269U;
void init() {
}

void checksum() {
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
