#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7270975437830856659ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2675322331U;
unsigned char var_5 = (unsigned char)7;
unsigned char var_8 = (unsigned char)124;
signed char var_10 = (signed char)40;
int zero = 0;
unsigned int var_12 = 1855632603U;
unsigned long long int var_13 = 608408338949559542ULL;
void init() {
}

void checksum() {
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
