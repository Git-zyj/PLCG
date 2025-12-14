#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3673110162668139490ULL;
unsigned int var_8 = 2013706668U;
unsigned long long int var_9 = 11048362833024426726ULL;
int var_11 = 798070625;
int zero = 0;
signed char var_13 = (signed char)30;
long long int var_14 = 1158539914227687516LL;
void init() {
}

void checksum() {
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
