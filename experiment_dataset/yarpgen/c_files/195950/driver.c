#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5331236157730316538ULL;
unsigned long long int var_11 = 5227786178844132275ULL;
signed char var_14 = (signed char)39;
int zero = 0;
unsigned short var_16 = (unsigned short)42571;
unsigned short var_17 = (unsigned short)31396;
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
