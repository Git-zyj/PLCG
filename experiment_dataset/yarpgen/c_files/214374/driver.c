#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8376637666985877403LL;
unsigned char var_7 = (unsigned char)238;
int var_9 = 1473373203;
long long int var_10 = -4592112069476984813LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)(-127 - 1);
unsigned int var_15 = 720661942U;
void init() {
}

void checksum() {
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
