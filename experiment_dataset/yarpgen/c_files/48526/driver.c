#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
int var_2 = 1697810125;
signed char var_3 = (signed char)92;
long long int var_4 = -7767850849766244572LL;
unsigned int var_5 = 1230077547U;
signed char var_7 = (signed char)-52;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 665391482520282020ULL;
int var_10 = 219905652;
long long int var_11 = 3160229250007641488LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6685168787361009813LL;
unsigned short var_14 = (unsigned short)43597;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9314919337636648202ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1672125851053940974LL;
signed char var_19 = (signed char)114;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)24285;
_Bool var_23 = (_Bool)0;
_Bool arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
unsigned long long int arr_4 [11] [11] [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
_Bool arr_12 [11] [11] ;
unsigned int arr_13 [11] [11] [11] ;
int arr_20 [11] ;
_Bool arr_29 [21] ;
unsigned short arr_6 [11] [11] ;
int arr_7 [11] [11] ;
int arr_11 [11] ;
int arr_14 [11] [11] [11] ;
_Bool arr_26 [11] [11] [11] ;
unsigned long long int arr_27 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 8585384674080103470ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2712262635998435745ULL : 1695335122909460872ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 3221962040422885652ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3398500U : 1363449520U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = 745848574;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)37559 : (unsigned short)32176;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 1188932996;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 1360810178;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 205384057 : -1319560724;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 13149968044631164990ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
