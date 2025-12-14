#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5391342993134177222LL;
_Bool var_9 = (_Bool)0;
short var_12 = (short)12903;
int zero = 0;
unsigned char var_14 = (unsigned char)255;
_Bool var_15 = (_Bool)1;
short var_16 = (short)26811;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
