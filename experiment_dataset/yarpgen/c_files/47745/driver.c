#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)9;
int var_3 = 728082014;
_Bool var_5 = (_Bool)1;
long long int var_11 = 268706115150440584LL;
int zero = 0;
long long int var_12 = 698636982095793437LL;
long long int var_13 = 991805736994352020LL;
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
