#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6718821945260338134ULL;
unsigned int var_3 = 270114252U;
unsigned char var_6 = (unsigned char)5;
_Bool var_9 = (_Bool)1;
long long int var_14 = 2607492700680362645LL;
int zero = 0;
unsigned long long int var_15 = 7378296059018090876ULL;
unsigned char var_16 = (unsigned char)34;
void init() {
}

void checksum() {
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
