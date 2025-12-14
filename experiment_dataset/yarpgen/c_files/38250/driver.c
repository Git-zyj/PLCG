#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)215;
long long int var_5 = 5852997935045176747LL;
long long int var_6 = 8021268461103700822LL;
signed char var_7 = (signed char)-124;
unsigned int var_8 = 2587144854U;
unsigned char var_9 = (unsigned char)115;
unsigned int var_10 = 1809348197U;
int var_12 = -1558650294;
long long int var_13 = -3810577612242887271LL;
unsigned long long int var_14 = 8705909731352268968ULL;
long long int var_15 = 8323135286237155761LL;
signed char var_17 = (signed char)-127;
int zero = 0;
unsigned short var_18 = (unsigned short)61950;
unsigned int var_19 = 1909793126U;
unsigned long long int var_20 = 16648659725871099576ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)43718;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)30;
unsigned long long int var_25 = 17245985552936909740ULL;
signed char var_26 = (signed char)6;
unsigned char var_27 = (unsigned char)172;
int var_28 = -1249297678;
unsigned int var_29 = 1235279903U;
unsigned long long int var_30 = 4181884912803751427ULL;
signed char var_31 = (signed char)38;
int var_32 = -1572991948;
unsigned short var_33 = (unsigned short)4381;
signed char var_34 = (signed char)76;
long long int var_35 = 4056279727782416208LL;
unsigned long long int var_36 = 11708320900878359068ULL;
signed char arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
unsigned char arr_2 [16] ;
unsigned char arr_3 [16] [16] ;
unsigned char arr_4 [16] [16] [16] ;
signed char arr_5 [13] ;
signed char arr_6 [13] ;
unsigned short arr_7 [13] [13] ;
signed char arr_10 [13] ;
unsigned int arr_12 [21] ;
signed char arr_13 [21] [21] ;
signed char arr_8 [13] ;
signed char arr_11 [13] [13] [13] ;
unsigned long long int arr_14 [21] ;
unsigned long long int arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)63131;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 2188136632U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 16067000916319484801ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 14756838318901033066ULL;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
