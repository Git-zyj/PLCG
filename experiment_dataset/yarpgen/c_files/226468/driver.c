#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_5 = 35297919;
unsigned char var_7 = (unsigned char)0;
int zero = 0;
int var_11 = -1822615875;
int var_12 = -1854164685;
int var_13 = -1134752005;
unsigned long long int var_14 = 10895537054021184609ULL;
int var_15 = 1755770000;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
