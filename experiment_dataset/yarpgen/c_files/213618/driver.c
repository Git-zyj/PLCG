#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)56;
_Bool var_4 = (_Bool)1;
int var_8 = -781502380;
short var_15 = (short)-23661;
int zero = 0;
short var_19 = (short)-4803;
unsigned long long int var_20 = 10523561461474466766ULL;
unsigned int var_21 = 1749738813U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
