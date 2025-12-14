#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5628247064674074829LL;
unsigned short var_2 = (unsigned short)14460;
unsigned short var_4 = (unsigned short)39342;
unsigned int var_5 = 608376048U;
unsigned long long int var_8 = 17371759432036751000ULL;
short var_11 = (short)1205;
int zero = 0;
unsigned int var_13 = 3904479562U;
unsigned short var_14 = (unsigned short)4432;
unsigned int var_15 = 1617381320U;
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
