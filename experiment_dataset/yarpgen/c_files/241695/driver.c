#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37415;
unsigned short var_3 = (unsigned short)32041;
unsigned short var_6 = (unsigned short)58959;
unsigned short var_11 = (unsigned short)28274;
_Bool var_12 = (_Bool)0;
long long int var_15 = 8755446832963438658LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-11;
_Bool var_18 = (_Bool)1;
long long int var_19 = 4357045733752899814LL;
int zero = 0;
unsigned short var_20 = (unsigned short)48836;
unsigned long long int var_21 = 12563974147454341484ULL;
void init() {
}

void checksum() {
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
