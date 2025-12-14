#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
unsigned int var_3 = 377449899U;
int zero = 0;
int var_14 = -2069337855;
long long int var_15 = 5692587913610402340LL;
unsigned long long int var_16 = 16057082454777241681ULL;
unsigned short var_17 = (unsigned short)489;
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
