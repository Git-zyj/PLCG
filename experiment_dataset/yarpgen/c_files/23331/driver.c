#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7031586370786025165LL;
unsigned int var_10 = 2324674558U;
int zero = 0;
long long int var_15 = 3888005204616268713LL;
long long int var_16 = 6753063574015425389LL;
short var_17 = (short)1336;
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
