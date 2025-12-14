#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16696221420796520343ULL;
signed char var_3 = (signed char)-68;
int var_6 = -1419862440;
int zero = 0;
signed char var_10 = (signed char)122;
unsigned long long int var_11 = 7096910087858581758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
