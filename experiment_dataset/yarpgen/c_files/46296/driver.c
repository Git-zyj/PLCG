#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16663706443011060599ULL;
unsigned short var_5 = (unsigned short)47050;
unsigned int var_6 = 3686799700U;
int var_9 = 928510957;
short var_12 = (short)-28455;
int zero = 0;
unsigned long long int var_13 = 10443589667462684507ULL;
unsigned long long int var_14 = 6985158152854241812ULL;
unsigned long long int var_15 = 13721814197150013859ULL;
unsigned int var_16 = 1001210734U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
