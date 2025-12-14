#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2841329330U;
unsigned char var_4 = (unsigned char)178;
long long int var_7 = 8054500186123423508LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -8686165535526895547LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8189356245833272489LL;
int var_16 = 678495922;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
