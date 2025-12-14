#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4611736898461842859LL;
unsigned long long int var_6 = 6098402544687638325ULL;
short var_16 = (short)18551;
int zero = 0;
unsigned int var_17 = 200340344U;
unsigned short var_18 = (unsigned short)23861;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
