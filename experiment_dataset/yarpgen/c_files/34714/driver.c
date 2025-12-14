#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 379491958U;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 6960998851831930008LL;
unsigned long long int var_21 = 13368036227387819616ULL;
long long int var_22 = 528240558992400013LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
