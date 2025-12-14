#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7762450034238038391LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_11 = 7358343526468610648ULL;
unsigned long long int var_14 = 15246214440870930924ULL;
int zero = 0;
long long int var_15 = -7075895502598814680LL;
unsigned int var_16 = 3081214846U;
long long int var_17 = -2481477926890759850LL;
void init() {
}

void checksum() {
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
