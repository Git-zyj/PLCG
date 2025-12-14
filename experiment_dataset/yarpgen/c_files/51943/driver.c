#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 683335934U;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)125;
unsigned long long int var_14 = 15532406265221485713ULL;
long long int var_15 = -7393709696290654152LL;
signed char var_17 = (signed char)-3;
int zero = 0;
signed char var_19 = (signed char)123;
int var_20 = 597178151;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
