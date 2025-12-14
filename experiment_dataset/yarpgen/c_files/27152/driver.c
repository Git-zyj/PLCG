#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4195;
long long int var_3 = 6089336151866279301LL;
int var_5 = 1334616788;
int zero = 0;
long long int var_12 = 236691059234607892LL;
unsigned int var_13 = 687725633U;
unsigned char var_14 = (unsigned char)117;
unsigned long long int var_15 = 9533189898569191292ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
