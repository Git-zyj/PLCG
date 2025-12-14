#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_5 = 16120968643676417443ULL;
long long int var_9 = 4447531059057131568LL;
short var_10 = (short)19592;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = 1095727311779037822LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-850;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
