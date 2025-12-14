#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2988983775U;
unsigned int var_5 = 1212721072U;
signed char var_9 = (signed char)-94;
long long int var_10 = -2297283097214832858LL;
int zero = 0;
unsigned short var_14 = (unsigned short)12815;
unsigned long long int var_15 = 7291188424362336251ULL;
unsigned long long int var_16 = 5962640821619122247ULL;
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
