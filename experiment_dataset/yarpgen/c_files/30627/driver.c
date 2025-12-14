#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-67;
unsigned char var_6 = (unsigned char)3;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 3507483930U;
unsigned int var_13 = 1091062487U;
int zero = 0;
int var_14 = -404626195;
unsigned int var_15 = 119844707U;
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
