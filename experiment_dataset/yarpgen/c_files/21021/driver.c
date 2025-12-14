#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2288976543U;
long long int var_3 = 7327605214166108293LL;
unsigned long long int var_5 = 14472821425854168635ULL;
signed char var_8 = (signed char)-1;
int zero = 0;
signed char var_12 = (signed char)-13;
unsigned char var_13 = (unsigned char)99;
unsigned int var_14 = 1605586599U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
