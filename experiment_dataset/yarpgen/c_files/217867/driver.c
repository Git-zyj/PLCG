#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2611358220U;
unsigned short var_3 = (unsigned short)62769;
unsigned int var_12 = 2877537463U;
int zero = 0;
unsigned int var_13 = 2314940665U;
int var_14 = 2061184829;
void init() {
}

void checksum() {
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
