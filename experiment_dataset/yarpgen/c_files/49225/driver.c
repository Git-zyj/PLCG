#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1344035096619520170LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 552726043U;
long long int var_6 = 5666411083469596866LL;
long long int var_8 = -4412087924888789384LL;
unsigned int var_9 = 2403721397U;
unsigned int var_12 = 1070215773U;
int zero = 0;
long long int var_17 = -6370619612382853964LL;
unsigned char var_18 = (unsigned char)26;
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
