#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1692274328246245289LL;
signed char var_7 = (signed char)23;
long long int var_11 = 239986819605390822LL;
int zero = 0;
signed char var_14 = (signed char)40;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 16266109058125613503ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
