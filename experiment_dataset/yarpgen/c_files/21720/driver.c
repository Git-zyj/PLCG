#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -113870945;
unsigned int var_3 = 3593806318U;
unsigned short var_7 = (unsigned short)40845;
long long int var_8 = -8318760955167032617LL;
unsigned long long int var_12 = 13007940479535080526ULL;
int var_13 = -1383605774;
unsigned long long int var_14 = 18334438463861563522ULL;
int zero = 0;
signed char var_15 = (signed char)96;
int var_16 = 301951724;
unsigned long long int var_17 = 1177232846975200239ULL;
signed char var_18 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
