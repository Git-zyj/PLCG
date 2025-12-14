#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15989368288170719559ULL;
unsigned short var_6 = (unsigned short)7639;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 1616418129;
signed char var_13 = (signed char)113;
long long int var_14 = 3920695446282790450LL;
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
