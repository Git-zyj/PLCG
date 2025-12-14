#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2300664715865577979LL;
unsigned short var_10 = (unsigned short)23769;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_16 = -209172604;
signed char var_17 = (signed char)87;
void init() {
}

void checksum() {
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
