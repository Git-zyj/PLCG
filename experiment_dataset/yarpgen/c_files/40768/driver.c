#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 441548000;
int var_5 = -386278664;
signed char var_8 = (signed char)62;
unsigned char var_15 = (unsigned char)41;
int zero = 0;
long long int var_17 = -2852260980938674170LL;
unsigned long long int var_18 = 11635092893596210649ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
