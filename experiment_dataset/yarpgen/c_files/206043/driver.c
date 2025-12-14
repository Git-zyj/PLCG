#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16025;
unsigned char var_6 = (unsigned char)49;
int var_10 = 96055211;
unsigned char var_16 = (unsigned char)53;
int zero = 0;
unsigned int var_20 = 1854615559U;
_Bool var_21 = (_Bool)1;
long long int var_22 = 3870277866919664940LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
