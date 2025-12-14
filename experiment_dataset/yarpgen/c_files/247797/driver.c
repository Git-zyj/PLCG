#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-14;
unsigned long long int var_12 = 12939137800498901192ULL;
unsigned long long int var_14 = 6631169645049651002ULL;
int zero = 0;
long long int var_15 = -5672692646649973933LL;
short var_16 = (short)6995;
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
