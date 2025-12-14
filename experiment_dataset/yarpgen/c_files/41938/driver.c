#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)-112;
unsigned int var_7 = 3612560676U;
short var_11 = (short)-19712;
int var_12 = 1666345825;
short var_18 = (short)-14866;
signed char var_19 = (signed char)90;
int zero = 0;
unsigned long long int var_20 = 13015440530439363694ULL;
long long int var_21 = 261799225287433643LL;
void init() {
}

void checksum() {
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
