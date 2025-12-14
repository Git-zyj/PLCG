#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 262438404U;
unsigned int var_4 = 4089013096U;
unsigned int var_6 = 1236991749U;
int zero = 0;
unsigned int var_15 = 2852575798U;
unsigned int var_16 = 760766133U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
