#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37433;
unsigned int var_2 = 1546294616U;
int var_3 = 634218281;
unsigned long long int var_4 = 15363717690929202838ULL;
int var_5 = 338213766;
int var_9 = -1516505593;
long long int var_10 = 4443599966355226721LL;
int zero = 0;
long long int var_11 = -6131048976920638008LL;
unsigned int var_12 = 477317235U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
