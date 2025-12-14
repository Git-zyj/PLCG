#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 373111321558251927LL;
unsigned int var_6 = 1816991191U;
signed char var_8 = (signed char)-91;
signed char var_10 = (signed char)29;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-84;
long long int var_14 = -4445317257427641922LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
