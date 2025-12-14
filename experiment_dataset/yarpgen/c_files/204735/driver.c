#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)45;
unsigned int var_4 = 950147303U;
signed char var_6 = (signed char)124;
unsigned int var_8 = 945611440U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2370307008U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
