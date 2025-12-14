#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)235;
unsigned long long int var_13 = 11176934153202246097ULL;
unsigned int var_16 = 3688245513U;
int zero = 0;
long long int var_17 = -6624630476990789563LL;
unsigned char var_18 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
