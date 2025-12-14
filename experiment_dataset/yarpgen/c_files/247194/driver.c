#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20494;
unsigned int var_8 = 1385287456U;
signed char var_9 = (signed char)5;
int zero = 0;
long long int var_12 = -2798465077083457011LL;
unsigned int var_13 = 1702474680U;
long long int var_14 = -3308871524664961482LL;
unsigned short var_15 = (unsigned short)39395;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
