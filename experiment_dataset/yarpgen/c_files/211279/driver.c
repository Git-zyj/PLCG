#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 440083900U;
unsigned short var_7 = (unsigned short)55314;
unsigned long long int var_8 = 18288802067951242157ULL;
long long int var_9 = -3937841896005981193LL;
signed char var_12 = (signed char)-65;
int zero = 0;
long long int var_13 = -8981407750746476918LL;
int var_14 = -938157551;
unsigned int var_15 = 1426655144U;
short var_16 = (short)23047;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
