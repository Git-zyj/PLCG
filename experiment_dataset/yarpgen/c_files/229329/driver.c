#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2883055183U;
unsigned long long int var_8 = 1653295006866736279ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 4188981912432776344ULL;
int zero = 0;
long long int var_16 = -1682519496970841362LL;
unsigned long long int var_17 = 9219033426360293465ULL;
void init() {
}

void checksum() {
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
