#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-347;
unsigned long long int var_10 = 14511765573395066122ULL;
long long int var_11 = -621483884099233574LL;
int zero = 0;
int var_14 = 1789240437;
unsigned int var_15 = 3898714222U;
short var_16 = (short)3638;
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
