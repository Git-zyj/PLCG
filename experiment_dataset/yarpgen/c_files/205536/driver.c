#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
long long int var_5 = 1275790574312706929LL;
unsigned short var_6 = (unsigned short)4577;
unsigned long long int var_9 = 2160629409211455852ULL;
unsigned long long int var_11 = 1868511261165275652ULL;
unsigned char var_12 = (unsigned char)10;
unsigned long long int var_13 = 4087861216474382875ULL;
unsigned long long int var_14 = 12403050503461127132ULL;
int zero = 0;
unsigned long long int var_17 = 6213889390016149505ULL;
unsigned int var_18 = 3909567803U;
unsigned int var_19 = 2820169862U;
int var_20 = 426736597;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
