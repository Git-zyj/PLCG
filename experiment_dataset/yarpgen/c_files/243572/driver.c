#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3097727616U;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 4221964583U;
int zero = 0;
unsigned long long int var_18 = 3945301362831243488ULL;
signed char var_19 = (signed char)40;
short var_20 = (short)5056;
unsigned int var_21 = 2050813308U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
