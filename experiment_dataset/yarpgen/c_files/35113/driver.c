#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1121412310U;
unsigned int var_6 = 1644417094U;
signed char var_9 = (signed char)33;
int zero = 0;
int var_11 = 367053373;
int var_12 = 1941756679;
unsigned short var_13 = (unsigned short)14251;
unsigned short var_14 = (unsigned short)35209;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
