#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8116716055293563547LL;
unsigned char var_3 = (unsigned char)219;
unsigned long long int var_4 = 14705098646006904229ULL;
unsigned long long int var_5 = 18333025108125172392ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1882074126U;
unsigned char var_12 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
