#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
unsigned int var_1 = 318831071U;
signed char var_5 = (signed char)117;
unsigned long long int var_8 = 16131030093809012094ULL;
unsigned long long int var_10 = 10179854286597716082ULL;
unsigned int var_12 = 3563361363U;
unsigned char var_13 = (unsigned char)136;
int zero = 0;
int var_14 = 1565770227;
short var_15 = (short)16772;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1474743105760583577LL;
unsigned char var_18 = (unsigned char)155;
signed char var_19 = (signed char)64;
unsigned long long int var_20 = 8832829957228265660ULL;
short var_21 = (short)21620;
short arr_0 [21] ;
_Bool arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-12344 : (short)-4931;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
