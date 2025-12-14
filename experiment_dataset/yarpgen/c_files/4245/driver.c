#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21807;
signed char var_6 = (signed char)-41;
_Bool var_7 = (_Bool)0;
int var_9 = -1756004665;
int zero = 0;
int var_12 = -2047751283;
long long int var_13 = 1167797916916511282LL;
signed char var_14 = (signed char)22;
int var_15 = -80778830;
void init() {
}

void checksum() {
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
