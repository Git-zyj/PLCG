#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7984636284222111425LL;
unsigned long long int var_8 = 15838037603891442520ULL;
unsigned int var_12 = 1250081653U;
int zero = 0;
int var_13 = -666373109;
short var_14 = (short)-7063;
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
