#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -126275838;
int var_5 = -681841881;
long long int var_7 = -3259759603431407333LL;
long long int var_8 = 1005867710891803533LL;
long long int var_13 = -3812516420022954056LL;
int zero = 0;
long long int var_14 = -1162262668977217124LL;
signed char var_15 = (signed char)88;
void init() {
}

void checksum() {
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
