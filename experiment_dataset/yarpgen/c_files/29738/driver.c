#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3742243598U;
int var_4 = 458160054;
int var_6 = 209673661;
unsigned int var_8 = 2267509823U;
int zero = 0;
unsigned int var_12 = 1236774321U;
long long int var_13 = -5896941175400702497LL;
int var_14 = -1570183770;
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
