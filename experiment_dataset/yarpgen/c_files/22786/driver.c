#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 617501110;
int var_5 = 1837076467;
_Bool var_9 = (_Bool)0;
short var_16 = (short)25245;
int zero = 0;
int var_20 = 1413573168;
signed char var_21 = (signed char)113;
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
