#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1682343965;
long long int var_1 = 970009703744359291LL;
unsigned int var_4 = 1547652364U;
unsigned int var_6 = 1421089861U;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_12 = -421855282;
unsigned long long int var_13 = 15007148963414793293ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
