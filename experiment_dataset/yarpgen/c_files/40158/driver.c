#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -572712688;
signed char var_9 = (signed char)-113;
long long int var_10 = -3910239577241177872LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-31237;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
