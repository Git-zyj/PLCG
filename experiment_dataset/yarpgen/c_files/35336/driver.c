#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1792521685;
int var_3 = -2051211995;
int var_5 = 2068277172;
int var_6 = 1112739116;
int var_7 = 1341073262;
int var_9 = -753649809;
int var_10 = 694523541;
int var_11 = -600060742;
int zero = 0;
int var_12 = 274274965;
int var_13 = 1231334133;
void init() {
}

void checksum() {
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
