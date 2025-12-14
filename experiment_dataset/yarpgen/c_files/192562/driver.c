#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1258437023U;
unsigned int var_5 = 1592105202U;
_Bool var_6 = (_Bool)1;
long long int var_9 = 6509299449309526548LL;
unsigned int var_11 = 1948829681U;
int zero = 0;
unsigned long long int var_13 = 15846321373657724601ULL;
unsigned int var_14 = 3713238021U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
