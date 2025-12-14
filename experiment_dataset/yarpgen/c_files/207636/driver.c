#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5526761170392665361LL;
unsigned long long int var_5 = 14470635083568912807ULL;
int var_6 = -1819041421;
long long int var_9 = -8644481432233476898LL;
int zero = 0;
long long int var_11 = -7301899053341977915LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
