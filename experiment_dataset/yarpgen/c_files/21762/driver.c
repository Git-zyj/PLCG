#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = 7671711175296387199LL;
long long int var_8 = -1887485571361108307LL;
int var_13 = -413305065;
unsigned short var_17 = (unsigned short)64998;
int zero = 0;
unsigned int var_19 = 2396485294U;
unsigned int var_20 = 1879250129U;
unsigned int var_21 = 2353567426U;
int var_22 = 678057729;
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
