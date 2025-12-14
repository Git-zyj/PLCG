#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1888237912886226081LL;
long long int var_7 = -3289556532465906342LL;
unsigned short var_15 = (unsigned short)32063;
int zero = 0;
unsigned int var_16 = 3681896916U;
unsigned short var_17 = (unsigned short)3588;
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
