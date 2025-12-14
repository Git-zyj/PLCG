#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = 8931006597015339771LL;
unsigned long long int var_8 = 16426154067049933282ULL;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_17 = -1972496566;
long long int var_18 = 2950544033696020915LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
