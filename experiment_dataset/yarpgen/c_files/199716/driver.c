#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2412541297U;
signed char var_4 = (signed char)113;
int zero = 0;
signed char var_14 = (signed char)-105;
signed char var_15 = (signed char)56;
signed char var_16 = (signed char)63;
signed char var_17 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
