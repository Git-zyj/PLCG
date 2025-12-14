#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 835622207U;
long long int var_10 = 2300202340615830952LL;
short var_11 = (short)-27536;
unsigned long long int var_12 = 9094716083227558642ULL;
int zero = 0;
int var_13 = -1115798678;
int var_14 = -1952554400;
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
