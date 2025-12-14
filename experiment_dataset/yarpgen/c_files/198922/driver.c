#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11912296663444140011ULL;
long long int var_11 = 7628430952130402959LL;
unsigned long long int var_14 = 760687490565567915ULL;
int var_17 = 2135021127;
int zero = 0;
long long int var_19 = 6771753196294341386LL;
unsigned long long int var_20 = 15356703517896042866ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
