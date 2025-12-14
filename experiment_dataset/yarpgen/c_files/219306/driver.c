#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1930779563U;
unsigned int var_11 = 3473524897U;
int zero = 0;
unsigned short var_12 = (unsigned short)63284;
unsigned long long int var_13 = 6251298440916671063ULL;
unsigned long long int var_14 = 8785464936494668825ULL;
signed char var_15 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
