#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29791;
long long int var_4 = 6114602175862260321LL;
_Bool var_7 = (_Bool)0;
long long int var_11 = -2841658276947307263LL;
long long int var_12 = 8938026728731859508LL;
int zero = 0;
int var_14 = 70323373;
unsigned int var_15 = 2676943495U;
int var_16 = 1864858588;
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
