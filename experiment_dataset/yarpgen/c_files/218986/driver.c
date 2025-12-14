#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
int var_4 = -92712315;
_Bool var_5 = (_Bool)1;
long long int var_6 = 8085398792244684374LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -1970357477675976082LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)56923;
int var_13 = -1095220097;
unsigned char var_14 = (unsigned char)42;
signed char var_15 = (signed char)33;
int var_16 = -952600904;
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
