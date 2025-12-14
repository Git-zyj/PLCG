#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4130222451999437248LL;
unsigned int var_1 = 2680523939U;
int var_4 = 1310337402;
unsigned int var_7 = 2845262403U;
unsigned int var_9 = 2863077416U;
long long int var_11 = 3712221177399582621LL;
int zero = 0;
long long int var_14 = 311898694526362720LL;
int var_15 = -1676119709;
unsigned int var_16 = 3052736857U;
long long int var_17 = 7498664710111111823LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
