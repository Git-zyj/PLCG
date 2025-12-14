#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 736835371;
long long int var_10 = 7103750327655698268LL;
int zero = 0;
int var_14 = -457554605;
long long int var_15 = -7676035999534776032LL;
unsigned char var_16 = (unsigned char)255;
int var_17 = 1891163474;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
