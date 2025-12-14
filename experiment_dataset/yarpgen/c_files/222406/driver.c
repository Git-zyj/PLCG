#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3091023830U;
long long int var_7 = -5368321473357755459LL;
unsigned char var_12 = (unsigned char)184;
int zero = 0;
unsigned char var_14 = (unsigned char)62;
unsigned int var_15 = 3613658950U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
