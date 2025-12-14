#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4959427574382802754ULL;
unsigned long long int var_4 = 5615156441996488393ULL;
signed char var_10 = (signed char)20;
int zero = 0;
unsigned char var_13 = (unsigned char)4;
signed char var_14 = (signed char)124;
unsigned long long int var_15 = 1299086550344452763ULL;
signed char var_16 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
