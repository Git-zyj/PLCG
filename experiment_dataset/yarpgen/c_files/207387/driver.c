#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2356162445U;
long long int var_8 = -7878887064578986565LL;
unsigned char var_14 = (unsigned char)69;
int zero = 0;
unsigned char var_15 = (unsigned char)236;
unsigned long long int var_16 = 17569211580749972692ULL;
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
