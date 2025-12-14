#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
int var_2 = 1694436182;
unsigned long long int var_9 = 17166827457971334412ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3099459533U;
int zero = 0;
long long int var_12 = 7459762651968998997LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -5304763618341455878LL;
_Bool var_15 = (_Bool)0;
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
