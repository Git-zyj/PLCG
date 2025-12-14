#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 117234278U;
unsigned long long int var_10 = 13167380015388137697ULL;
int zero = 0;
int var_11 = -401031696;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
