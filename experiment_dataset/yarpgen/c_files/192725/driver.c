#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 4520460732655217314LL;
signed char var_3 = (signed char)29;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -7561429355970114987LL;
long long int var_12 = 8545521264460810549LL;
unsigned long long int var_13 = 15002628291052707617ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
