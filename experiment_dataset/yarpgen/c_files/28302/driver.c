#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)233;
int var_8 = 225236649;
long long int var_14 = -8113159244468769154LL;
int var_16 = 784001634;
int zero = 0;
long long int var_18 = -2425455968582426606LL;
unsigned char var_19 = (unsigned char)26;
long long int var_20 = 7764129738838738396LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
