#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6210847656213672950LL;
int var_2 = -914386335;
unsigned short var_3 = (unsigned short)16412;
_Bool var_6 = (_Bool)0;
unsigned int var_11 = 3586812977U;
int zero = 0;
long long int var_12 = -1770666560017408226LL;
long long int var_13 = -3603135693156423221LL;
unsigned long long int var_14 = 6642508730377324080ULL;
unsigned int var_15 = 2275287469U;
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
