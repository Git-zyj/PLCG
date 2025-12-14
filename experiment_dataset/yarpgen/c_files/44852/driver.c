#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)27;
short var_10 = (short)31877;
long long int var_18 = -5583120536007222862LL;
int zero = 0;
short var_19 = (short)16530;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1787670388U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
