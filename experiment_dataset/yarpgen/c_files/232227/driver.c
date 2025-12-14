#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48865;
int var_8 = -146158232;
unsigned short var_9 = (unsigned short)60921;
unsigned short var_12 = (unsigned short)43873;
unsigned short var_18 = (unsigned short)30279;
int zero = 0;
unsigned int var_19 = 2369275769U;
long long int var_20 = 7551115639357567106LL;
void init() {
}

void checksum() {
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
