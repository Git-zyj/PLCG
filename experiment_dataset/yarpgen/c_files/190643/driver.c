#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4125572576439261690ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11728167282389291082ULL;
long long int var_7 = 8169091656046316188LL;
unsigned int var_8 = 586464304U;
signed char var_11 = (signed char)-68;
int zero = 0;
long long int var_14 = 7682043911526312438LL;
_Bool var_15 = (_Bool)0;
int var_16 = -445708105;
void init() {
}

void checksum() {
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
