#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1660040278518949744LL;
signed char var_2 = (signed char)69;
unsigned long long int var_3 = 12722251144932772860ULL;
long long int var_4 = 5994395617405659799LL;
int zero = 0;
signed char var_14 = (signed char)112;
unsigned long long int var_15 = 8963865939695857160ULL;
unsigned long long int var_16 = 589565757715275981ULL;
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
