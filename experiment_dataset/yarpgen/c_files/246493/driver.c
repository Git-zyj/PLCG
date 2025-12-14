#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)94;
unsigned short var_5 = (unsigned short)5422;
short var_7 = (short)-28573;
unsigned int var_8 = 2237344633U;
short var_9 = (short)-10215;
int zero = 0;
unsigned short var_11 = (unsigned short)49246;
unsigned int var_12 = 3345800743U;
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
