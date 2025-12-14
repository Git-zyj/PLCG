#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_4 = (short)6394;
int var_5 = 1942156945;
unsigned char var_7 = (unsigned char)178;
int zero = 0;
long long int var_13 = 2482439807888762213LL;
int var_14 = 1769943204;
unsigned long long int var_15 = 11403695946478105911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
