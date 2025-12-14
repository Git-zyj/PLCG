#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)230;
signed char var_5 = (signed char)30;
unsigned char var_7 = (unsigned char)144;
_Bool var_9 = (_Bool)0;
int var_10 = 504124618;
int zero = 0;
unsigned long long int var_20 = 15448957661859125363ULL;
unsigned char var_21 = (unsigned char)253;
unsigned int var_22 = 2919055154U;
long long int var_23 = 5049339874394871549LL;
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
