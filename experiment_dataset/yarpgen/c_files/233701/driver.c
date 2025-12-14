#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned char var_3 = (unsigned char)172;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2508758089U;
int zero = 0;
unsigned char var_16 = (unsigned char)242;
unsigned char var_17 = (unsigned char)88;
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
