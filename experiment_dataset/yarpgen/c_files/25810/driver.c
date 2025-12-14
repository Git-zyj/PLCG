#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
long long int var_2 = 4737587339189986395LL;
int var_5 = -2260602;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 250150224U;
unsigned int var_13 = 3242116539U;
unsigned int var_14 = 1106002553U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
