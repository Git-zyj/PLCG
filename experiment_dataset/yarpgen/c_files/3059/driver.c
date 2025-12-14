#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6671920628607048022LL;
int var_8 = -1428660973;
int zero = 0;
int var_11 = 1901784416;
unsigned int var_12 = 1377964065U;
unsigned int var_13 = 4028954582U;
unsigned int var_14 = 1553856763U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
