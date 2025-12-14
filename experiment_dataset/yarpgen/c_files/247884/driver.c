#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2194606278U;
unsigned long long int var_7 = 18214103334082677412ULL;
unsigned short var_10 = (unsigned short)32317;
int zero = 0;
long long int var_11 = 4449570968030789359LL;
unsigned char var_12 = (unsigned char)48;
void init() {
}

void checksum() {
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
