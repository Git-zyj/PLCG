#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 16368882156336601731ULL;
int zero = 0;
unsigned long long int var_16 = 12149456586719988985ULL;
unsigned long long int var_17 = 7379175032323567598ULL;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
