#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 3630074895U;
int zero = 0;
unsigned int var_18 = 1372241692U;
long long int var_19 = -3035871971408219193LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
