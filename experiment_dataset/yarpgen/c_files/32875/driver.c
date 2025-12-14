#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7205582178746161866LL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1105924477U;
int var_14 = 540027607;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
