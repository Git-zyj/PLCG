#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2415888876U;
int var_2 = 442127886;
long long int var_4 = -6954995571623433584LL;
unsigned long long int var_6 = 10087799291920797149ULL;
short var_7 = (short)8836;
int zero = 0;
unsigned long long int var_10 = 12591358430178564270ULL;
int var_11 = -630298446;
signed char var_12 = (signed char)-86;
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
