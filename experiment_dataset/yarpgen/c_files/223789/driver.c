#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11720223145791871706ULL;
_Bool var_1 = (_Bool)1;
int var_2 = 1835542203;
long long int var_3 = 8559296089990104015LL;
long long int var_4 = 3388405873655682326LL;
unsigned int var_5 = 1806287401U;
int var_7 = 699142560;
signed char var_8 = (signed char)126;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int var_11 = 863247664;
long long int var_12 = -2963503440175473861LL;
int zero = 0;
int var_13 = -1976151589;
unsigned short var_14 = (unsigned short)28595;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6316270605381376572LL;
int var_18 = -163197828;
long long int var_19 = -3329246915498938696LL;
short var_20 = (short)-14059;
unsigned char var_21 = (unsigned char)247;
unsigned char arr_2 [11] ;
int arr_13 [25] [25] ;
short arr_14 [25] ;
unsigned char arr_15 [25] ;
int arr_20 [16] ;
int arr_21 [16] ;
_Bool arr_24 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)203 : (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = -362735731;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (short)24795;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 1649839040;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = -552012613;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
