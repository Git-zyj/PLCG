#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1992045160U;
long long int var_5 = 3430871222981039072LL;
unsigned char var_8 = (unsigned char)250;
int zero = 0;
long long int var_11 = 4375196497525004649LL;
signed char var_12 = (signed char)59;
signed char var_13 = (signed char)-73;
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
