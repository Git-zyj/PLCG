#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4734;
unsigned long long int var_2 = 14785634348564101018ULL;
unsigned long long int var_5 = 16186817066607073160ULL;
short var_7 = (short)6362;
short var_10 = (short)-4179;
unsigned long long int var_11 = 17191640511641067826ULL;
short var_12 = (short)-15398;
signed char var_13 = (signed char)104;
int zero = 0;
unsigned long long int var_14 = 17771158088216301118ULL;
signed char var_15 = (signed char)-16;
unsigned long long int var_16 = 17824559530508764960ULL;
signed char var_17 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
