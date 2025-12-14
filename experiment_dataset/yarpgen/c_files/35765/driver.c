#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 424031284;
signed char var_3 = (signed char)-109;
int var_4 = 1007083923;
unsigned int var_5 = 844784177U;
signed char var_7 = (signed char)-75;
int zero = 0;
signed char var_10 = (signed char)-125;
unsigned char var_11 = (unsigned char)201;
unsigned int var_12 = 3697927971U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
