#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -144850824;
unsigned char var_8 = (unsigned char)222;
long long int var_18 = 434098132714650406LL;
int zero = 0;
unsigned int var_19 = 570600498U;
long long int var_20 = 6965852360381893808LL;
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
