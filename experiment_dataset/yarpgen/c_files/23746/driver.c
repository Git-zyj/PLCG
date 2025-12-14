#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_14 = 2131989400;
long long int var_15 = -5255812918365563167LL;
int zero = 0;
int var_20 = 1846679841;
unsigned char var_21 = (unsigned char)101;
unsigned int var_22 = 2410486293U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
