#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1836152189;
signed char var_4 = (signed char)35;
unsigned long long int var_11 = 3586039164546678305ULL;
long long int var_13 = -8510788447214954388LL;
int zero = 0;
int var_16 = -1566801811;
long long int var_17 = -2632170261526299333LL;
unsigned char var_18 = (unsigned char)154;
int var_19 = -1841415620;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
