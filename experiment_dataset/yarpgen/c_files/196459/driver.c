#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28350;
int var_5 = 2015955567;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3450679224U;
unsigned long long int var_9 = 6500446025008455125ULL;
unsigned long long int var_10 = 4323203634497902232ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 9755148908253416131ULL;
unsigned short var_14 = (unsigned short)12132;
signed char var_15 = (signed char)49;
int var_16 = 118897829;
unsigned char var_17 = (unsigned char)38;
int zero = 0;
unsigned long long int var_18 = 15624539235372919779ULL;
long long int var_19 = -2185366984682243981LL;
_Bool var_20 = (_Bool)0;
int var_21 = -1410932846;
signed char var_22 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
