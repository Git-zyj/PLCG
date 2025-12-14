#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1103920583878522351LL;
unsigned long long int var_7 = 14497677744516472243ULL;
unsigned short var_13 = (unsigned short)27711;
int zero = 0;
int var_14 = 378119026;
unsigned short var_15 = (unsigned short)24900;
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
