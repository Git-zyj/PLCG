#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)20658;
_Bool var_4 = (_Bool)0;
unsigned int var_10 = 1051526102U;
int zero = 0;
unsigned char var_20 = (unsigned char)174;
_Bool var_21 = (_Bool)1;
long long int var_22 = 70223880780293224LL;
signed char var_23 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
