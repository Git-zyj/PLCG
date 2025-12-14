#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1441131448;
int var_5 = -1321302614;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = -7274919798387879492LL;
short var_16 = (short)-28512;
short var_17 = (short)-6299;
long long int var_18 = 9190581387371680255LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
