#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)20480;
short var_15 = (short)8607;
long long int var_17 = 7886691400971212167LL;
long long int var_18 = -473277208801401918LL;
int zero = 0;
long long int var_20 = -8924954642751930807LL;
long long int var_21 = -6227116532484272015LL;
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
