#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -580005913;
unsigned long long int var_2 = 9337328020715202844ULL;
_Bool var_3 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 568603115U;
long long int var_20 = -8192924468232331505LL;
int var_21 = -1682049184;
int var_22 = 1154006343;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
