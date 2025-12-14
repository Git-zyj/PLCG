#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6836;
unsigned long long int var_4 = 12098460684426520995ULL;
short var_10 = (short)29716;
signed char var_13 = (signed char)-51;
int zero = 0;
signed char var_15 = (signed char)102;
signed char var_16 = (signed char)109;
void init() {
}

void checksum() {
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
