#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8689124616657309577ULL;
long long int var_10 = 5309612267246212308LL;
int zero = 0;
long long int var_13 = 3660265480612650546LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2590999502U;
void init() {
}

void checksum() {
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
