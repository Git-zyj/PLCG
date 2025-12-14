#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 306617559;
int var_4 = 1469219007;
int var_7 = 1451307719;
signed char var_9 = (signed char)39;
unsigned long long int var_10 = 10850240210198558986ULL;
int zero = 0;
unsigned long long int var_13 = 2218682635459904080ULL;
signed char var_14 = (signed char)32;
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
