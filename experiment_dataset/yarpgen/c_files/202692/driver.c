#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)18479;
unsigned int var_15 = 3025271243U;
int zero = 0;
unsigned int var_19 = 331185732U;
unsigned long long int var_20 = 10587054733571596309ULL;
unsigned short var_21 = (unsigned short)23012;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
