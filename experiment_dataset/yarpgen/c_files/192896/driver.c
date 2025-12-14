#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)20;
unsigned int var_13 = 1232038216U;
_Bool var_15 = (_Bool)1;
long long int var_17 = 1521975980678802995LL;
int zero = 0;
unsigned int var_19 = 582043326U;
unsigned int var_20 = 3264569878U;
int var_21 = -424557091;
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
