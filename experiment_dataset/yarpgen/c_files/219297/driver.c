#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)25;
short var_13 = (short)-18156;
int zero = 0;
unsigned long long int var_20 = 1364786749416919209ULL;
unsigned long long int var_21 = 3296448531465872434ULL;
unsigned long long int var_22 = 17383827441301712434ULL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
