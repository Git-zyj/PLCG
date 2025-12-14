#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_7 = 2559470636218056921LL;
long long int var_11 = -5713969846829937657LL;
int zero = 0;
long long int var_12 = -2281195484623185514LL;
int var_13 = 216398359;
signed char var_14 = (signed char)91;
unsigned int var_15 = 2146148695U;
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
