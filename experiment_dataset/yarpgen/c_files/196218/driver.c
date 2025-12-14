#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -421435047375277401LL;
long long int var_6 = -7399277191548863444LL;
int zero = 0;
long long int var_11 = -5933436539993654754LL;
long long int var_12 = -6339835803780703386LL;
long long int var_13 = -8857010292671735156LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
