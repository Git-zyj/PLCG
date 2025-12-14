#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 538933069;
long long int var_8 = -2740542497511184062LL;
long long int var_10 = -2401111374521508146LL;
int var_11 = 267009325;
int zero = 0;
long long int var_14 = -6654636462135458385LL;
signed char var_15 = (signed char)54;
unsigned int var_16 = 1648328979U;
unsigned char var_17 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
