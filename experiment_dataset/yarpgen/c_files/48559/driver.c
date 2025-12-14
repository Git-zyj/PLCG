#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2392931165239199238LL;
unsigned short var_5 = (unsigned short)52176;
unsigned char var_11 = (unsigned char)232;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)131;
int zero = 0;
long long int var_19 = 4992219964414314033LL;
unsigned short var_20 = (unsigned short)44550;
unsigned short var_21 = (unsigned short)44509;
short var_22 = (short)4948;
unsigned long long int var_23 = 11565604043153733813ULL;
short var_24 = (short)-1772;
unsigned short var_25 = (unsigned short)53364;
unsigned char var_26 = (unsigned char)238;
unsigned char arr_0 [21] ;
unsigned char arr_1 [21] ;
long long int arr_3 [15] ;
int arr_5 [15] ;
int arr_2 [21] ;
unsigned long long int arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 6804115764347366489LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -232009045;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1885672402;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 7011993756812705100ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
