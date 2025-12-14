#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_11 = 1618431561;
int var_15 = -108287070;
int var_17 = 1715239973;
signed char var_18 = (signed char)112;
int zero = 0;
long long int var_20 = -5330178620444083369LL;
unsigned int var_21 = 3298836174U;
unsigned short var_22 = (unsigned short)37922;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
