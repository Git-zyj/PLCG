#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2461833959561443865LL;
int var_3 = -984392286;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_13 = -7653145266506404450LL;
int zero = 0;
long long int var_15 = 8134560703011370272LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
