#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3190429142992301638ULL;
long long int var_8 = -3335171212650330324LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1797290290U;
long long int var_19 = 5604971175716922056LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3240194242U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
