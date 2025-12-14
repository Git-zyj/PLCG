#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3399817718U;
unsigned long long int var_2 = 1637752431780934183ULL;
unsigned long long int var_5 = 1581983179100555826ULL;
unsigned int var_10 = 3033711263U;
int zero = 0;
signed char var_14 = (signed char)-25;
long long int var_15 = -6799009905247403233LL;
unsigned long long int var_16 = 12697924265634401793ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
