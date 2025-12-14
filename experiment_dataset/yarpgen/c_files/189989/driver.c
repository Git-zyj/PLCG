#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14627356519982228766ULL;
unsigned int var_4 = 3609384916U;
int var_5 = -1135117264;
int var_6 = 1451655955;
unsigned int var_7 = 1834494741U;
unsigned char var_9 = (unsigned char)16;
long long int var_10 = 507549416961488764LL;
unsigned long long int var_13 = 2035573707892845391ULL;
long long int var_14 = -589442968663485151LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)137;
int var_18 = 1731733255;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 11277317325270400515ULL;
unsigned int var_21 = 2344359879U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
