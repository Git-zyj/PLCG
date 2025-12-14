#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = 590978099;
int var_5 = -420076971;
int var_6 = 427679567;
int var_9 = -542128137;
unsigned int var_10 = 458153167U;
int zero = 0;
int var_11 = -805299628;
short var_12 = (short)7836;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
