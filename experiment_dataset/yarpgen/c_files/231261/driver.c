#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13150452912157673632ULL;
unsigned int var_2 = 1505688495U;
short var_5 = (short)-19762;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2216980166U;
short var_12 = (short)29467;
unsigned int var_13 = 1460032770U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
