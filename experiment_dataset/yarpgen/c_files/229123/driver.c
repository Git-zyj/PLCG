#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = 2846004010677897902LL;
unsigned long long int var_7 = 2307456891435564067ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = -529146446;
long long int var_12 = 6394054623672081345LL;
long long int var_13 = 3692641881805438396LL;
short var_14 = (short)-12564;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
