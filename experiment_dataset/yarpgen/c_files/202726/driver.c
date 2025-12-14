#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7045672440591406454ULL;
unsigned int var_1 = 1633554439U;
short var_4 = (short)-10659;
unsigned int var_8 = 841328797U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)53;
unsigned long long int var_20 = 12160561858649350801ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
