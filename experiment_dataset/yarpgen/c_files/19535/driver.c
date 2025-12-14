#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 623640149U;
unsigned char var_5 = (unsigned char)207;
unsigned char var_7 = (unsigned char)92;
long long int var_8 = 514925449002817824LL;
int zero = 0;
long long int var_10 = 2022526898766450377LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1702824320U;
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
