#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1403170041578189355LL;
unsigned int var_13 = 267527495U;
int var_17 = 1968379523;
unsigned char var_19 = (unsigned char)249;
int zero = 0;
unsigned char var_20 = (unsigned char)150;
_Bool var_21 = (_Bool)1;
long long int var_22 = 8866081280415411740LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
