#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)37;
signed char var_4 = (signed char)24;
long long int var_6 = -6297670666433610185LL;
signed char var_7 = (signed char)-119;
long long int var_8 = -2258211624516790243LL;
int zero = 0;
signed char var_10 = (signed char)-21;
long long int var_11 = 8553739291984045210LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
