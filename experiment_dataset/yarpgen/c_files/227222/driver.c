#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = -605913194;
long long int var_6 = -739680450348556633LL;
unsigned long long int var_7 = 1255793097610642690ULL;
long long int var_9 = 8245500960993546096LL;
unsigned char var_10 = (unsigned char)224;
signed char var_11 = (signed char)-32;
unsigned char var_16 = (unsigned char)203;
unsigned long long int var_18 = 8726794731404427155ULL;
unsigned long long int var_19 = 11531181323539441353ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)105;
long long int var_21 = -5270072093976258310LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 14197040714456159266ULL;
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
