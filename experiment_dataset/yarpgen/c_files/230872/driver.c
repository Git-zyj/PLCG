#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56764;
_Bool var_1 = (_Bool)0;
long long int var_2 = -4571367635544968482LL;
unsigned char var_3 = (unsigned char)17;
short var_4 = (short)30695;
unsigned long long int var_5 = 5780247983319166477ULL;
unsigned int var_6 = 1426049031U;
signed char var_7 = (signed char)38;
unsigned int var_8 = 2767198320U;
unsigned int var_10 = 980102025U;
signed char var_11 = (signed char)61;
unsigned int var_12 = 4094706430U;
unsigned char var_13 = (unsigned char)183;
long long int var_14 = 6864613634940646911LL;
signed char var_16 = (signed char)98;
long long int var_17 = -2014605656707357433LL;
unsigned char var_18 = (unsigned char)119;
int zero = 0;
signed char var_19 = (signed char)93;
unsigned char var_20 = (unsigned char)186;
unsigned long long int var_21 = 15983717890917938520ULL;
signed char var_22 = (signed char)-52;
long long int var_23 = 8573642171718848718LL;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 13868070731886325853ULL;
unsigned long long int var_26 = 10928473284576618768ULL;
unsigned int var_27 = 1467642840U;
signed char var_28 = (signed char)31;
unsigned short arr_3 [25] ;
unsigned char arr_4 [25] ;
long long int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2619 : (unsigned short)4854;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)94 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -3902242161085479407LL : 5368181172182527109LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
