#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -3840096900765083071LL;
unsigned int var_3 = 3528656106U;
long long int var_4 = 213414663592515782LL;
signed char var_5 = (signed char)9;
long long int var_6 = 8315243457445642841LL;
short var_7 = (short)21391;
short var_8 = (short)-27660;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3548326404U;
unsigned char var_11 = (unsigned char)221;
unsigned int var_12 = 714429832U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1548706691U;
signed char var_15 = (signed char)-95;
int var_16 = 1638349074;
unsigned int var_17 = 3520281956U;
unsigned char var_18 = (unsigned char)58;
int var_19 = -676586526;
short var_20 = (short)-3771;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)119;
short var_23 = (short)17169;
_Bool var_24 = (_Bool)1;
int var_25 = 658682743;
_Bool var_26 = (_Bool)0;
unsigned int arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
int arr_3 [14] [14] [14] ;
short arr_8 [14] ;
_Bool arr_9 [14] [14] [14] ;
signed char arr_12 [25] ;
signed char arr_13 [25] [25] ;
long long int arr_16 [17] ;
_Bool arr_17 [17] ;
unsigned int arr_19 [17] ;
unsigned short arr_20 [17] [17] ;
signed char arr_22 [17] [17] [17] ;
unsigned char arr_25 [17] ;
short arr_6 [14] ;
long long int arr_7 [14] [14] ;
unsigned char arr_11 [14] [14] ;
short arr_14 [25] ;
long long int arr_15 [25] [25] ;
unsigned long long int arr_18 [17] ;
unsigned int arr_23 [17] [17] ;
unsigned int arr_24 [17] ;
unsigned int arr_27 [17] ;
long long int arr_28 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2295729948U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)16155;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1733353322 : -799370396;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-27498 : (short)-19929;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (signed char)30 : (signed char)123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = -4093922576144607753LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 2260853059U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)2911;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)10266 : (short)-20347;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4423276057135585219LL : -8062376207348624350LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)166 : (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)27671 : (short)32070;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -5349899776393030197LL : 6668966622304074345LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 11805539187351777505ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = 3408477944U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = 840439262U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = 4236439230U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_28 [i_0] [i_1] = 8404534935401281897LL;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
