#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4022208125047831680LL;
unsigned int var_9 = 2956176464U;
unsigned int var_10 = 942840156U;
int zero = 0;
unsigned int var_11 = 797896016U;
int var_12 = 699741467;
unsigned int var_13 = 2336427720U;
unsigned int var_14 = 2978592923U;
unsigned int var_15 = 947500471U;
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
