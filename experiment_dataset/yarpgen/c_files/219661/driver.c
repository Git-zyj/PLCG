#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2275893358U;
unsigned long long int var_3 = 3008887435611229791ULL;
unsigned int var_5 = 1715565880U;
unsigned long long int var_6 = 1995720694539498739ULL;
long long int var_7 = 214876183372913262LL;
short var_11 = (short)-32270;
int zero = 0;
signed char var_13 = (signed char)59;
long long int var_14 = 7404612919302008156LL;
unsigned long long int var_15 = 4418652347540280565ULL;
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
