#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)34165;
unsigned long long int var_10 = 6702659410840034392ULL;
unsigned long long int var_11 = 17150546956165002780ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3801751432U;
signed char var_14 = (signed char)15;
int var_15 = 1346010850;
int var_16 = 247499082;
int var_17 = -1127079443;
long long int var_18 = 697681959739537186LL;
int var_19 = -1113451359;
unsigned long long int var_20 = 5594292977375236948ULL;
unsigned int var_21 = 2001039291U;
short var_22 = (short)-20824;
int var_23 = -1178921158;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 16718676225821788917ULL;
short var_26 = (short)21562;
long long int var_27 = -2963306535673064355LL;
unsigned long long int var_28 = 849843930102254516ULL;
int var_29 = 1313787104;
_Bool var_30 = (_Bool)1;
unsigned short arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55191 : (unsigned short)23011;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
