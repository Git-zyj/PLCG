#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
int var_3 = -232615289;
int var_4 = 980689375;
short var_8 = (short)5801;
short var_9 = (short)29410;
int var_11 = 1418676688;
int zero = 0;
long long int var_16 = 2758561271330931233LL;
unsigned short var_17 = (unsigned short)15802;
unsigned short var_18 = (unsigned short)30755;
int var_19 = -2111255538;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
