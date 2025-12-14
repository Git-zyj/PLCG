#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)233;
_Bool var_5 = (_Bool)1;
unsigned int var_12 = 1943515508U;
int zero = 0;
unsigned char var_13 = (unsigned char)192;
int var_14 = -407116790;
signed char var_15 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
