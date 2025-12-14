#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5898248350276692737LL;
signed char var_5 = (signed char)-51;
unsigned char var_10 = (unsigned char)42;
unsigned long long int var_11 = 6673980784853603278ULL;
int zero = 0;
int var_12 = -1469821460;
unsigned long long int var_13 = 15349416034905688764ULL;
signed char var_14 = (signed char)91;
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
