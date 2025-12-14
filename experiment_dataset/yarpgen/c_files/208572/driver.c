#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1620830370U;
unsigned long long int var_5 = 2846200755690331052ULL;
int var_7 = 1063172672;
unsigned int var_8 = 3595539873U;
signed char var_10 = (signed char)77;
int zero = 0;
int var_11 = -724008151;
unsigned int var_12 = 1642550284U;
short var_13 = (short)5109;
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
