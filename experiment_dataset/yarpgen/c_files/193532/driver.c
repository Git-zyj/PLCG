#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9428466489217173931ULL;
long long int var_7 = 5559429972825513606LL;
signed char var_10 = (signed char)-28;
unsigned int var_13 = 3128320135U;
int zero = 0;
short var_16 = (short)19298;
signed char var_17 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
