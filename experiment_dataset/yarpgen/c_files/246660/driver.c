#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5875329112334858712LL;
unsigned char var_12 = (unsigned char)96;
unsigned int var_17 = 1584346706U;
int zero = 0;
unsigned char var_18 = (unsigned char)129;
unsigned int var_19 = 2140465483U;
void init() {
}

void checksum() {
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
