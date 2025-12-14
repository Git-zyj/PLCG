#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 5624357035941598507ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)6;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3599145283U;
unsigned char var_20 = (unsigned char)93;
unsigned short var_21 = (unsigned short)16141;
unsigned long long int var_22 = 5980634250901816980ULL;
long long int var_23 = -123351024898874960LL;
unsigned int var_24 = 2777538422U;
_Bool var_25 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
