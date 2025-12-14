#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3982663996060207066ULL;
unsigned int var_6 = 1000293589U;
unsigned int var_8 = 2313634363U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 330724306U;
unsigned int var_20 = 3273763500U;
unsigned int var_21 = 3003645332U;
void init() {
}

void checksum() {
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
