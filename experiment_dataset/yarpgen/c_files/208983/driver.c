#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-76;
signed char var_6 = (signed char)-75;
unsigned char var_8 = (unsigned char)73;
unsigned int var_10 = 1668439441U;
unsigned int var_11 = 1432852777U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)75;
long long int var_14 = -3114296016556386225LL;
int zero = 0;
long long int var_15 = 4372178148455440344LL;
unsigned char var_16 = (unsigned char)192;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
