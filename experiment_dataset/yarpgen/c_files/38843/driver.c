#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)141;
int zero = 0;
int var_19 = 1401101697;
unsigned int var_20 = 1298478864U;
unsigned int var_21 = 1093139482U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
