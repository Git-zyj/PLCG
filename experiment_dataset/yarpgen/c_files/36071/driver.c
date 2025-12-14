#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2612482430U;
long long int var_1 = -7179314380897499054LL;
int var_3 = -1727730217;
int var_9 = 425754442;
unsigned int var_11 = 1865189266U;
int var_12 = -916232899;
int zero = 0;
unsigned int var_14 = 1712775872U;
unsigned int var_15 = 3111785120U;
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
