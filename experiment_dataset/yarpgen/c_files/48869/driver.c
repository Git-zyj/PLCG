#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7407503107259118311ULL;
unsigned long long int var_3 = 12982096363168477954ULL;
unsigned char var_4 = (unsigned char)201;
unsigned char var_5 = (unsigned char)4;
unsigned long long int var_11 = 8575151475351245478ULL;
int zero = 0;
unsigned long long int var_12 = 5969767707870937129ULL;
unsigned long long int var_13 = 1993923702804305743ULL;
unsigned long long int var_14 = 16326370324609214857ULL;
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
