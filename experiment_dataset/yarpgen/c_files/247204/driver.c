#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1829156862U;
unsigned int var_1 = 1721638734U;
unsigned int var_2 = 3919091658U;
signed char var_6 = (signed char)26;
unsigned short var_9 = (unsigned short)232;
unsigned int var_13 = 3509064614U;
int zero = 0;
unsigned int var_17 = 3314530410U;
unsigned int var_18 = 3885595194U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
