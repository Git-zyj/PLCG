#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2431213131U;
long long int var_11 = 5007801698916503446LL;
short var_12 = (short)2624;
int var_13 = 921559199;
int zero = 0;
signed char var_15 = (signed char)95;
int var_16 = 1736232593;
unsigned long long int var_17 = 6312944274046911603ULL;
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
