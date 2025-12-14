#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 465444314;
short var_1 = (short)-26145;
int var_2 = -1328653436;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-125;
unsigned short var_5 = (unsigned short)6271;
short var_6 = (short)-613;
int var_7 = 612338833;
unsigned int var_9 = 3827417956U;
int zero = 0;
unsigned long long int var_10 = 12398520173504701939ULL;
int var_11 = 1560953816;
short var_12 = (short)24167;
unsigned char var_13 = (unsigned char)209;
int var_14 = -1225301384;
int var_15 = 2057166169;
unsigned long long int var_16 = 5495832538247353664ULL;
unsigned long long int var_17 = 13105952489505266645ULL;
unsigned long long int var_18 = 12186952869462335363ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3172321325U;
unsigned long long int var_21 = 318619441017843027ULL;
short var_22 = (short)-16065;
unsigned short var_23 = (unsigned short)12077;
short var_24 = (short)-26365;
long long int arr_0 [17] ;
short arr_1 [17] ;
int arr_2 [17] ;
signed char arr_4 [21] [21] ;
unsigned int arr_7 [24] [24] ;
unsigned long long int arr_8 [24] [24] ;
unsigned long long int arr_19 [23] ;
signed char arr_20 [23] ;
signed char arr_21 [23] ;
unsigned long long int arr_22 [23] ;
unsigned char arr_25 [23] [23] [23] ;
unsigned char arr_29 [23] [23] ;
unsigned short arr_3 [17] [17] ;
int arr_6 [21] ;
signed char arr_9 [24] [24] ;
unsigned short arr_10 [24] [24] ;
unsigned int arr_15 [16] [16] ;
long long int arr_16 [16] [16] ;
unsigned long long int arr_17 [16] ;
int arr_18 [16] ;
int arr_27 [23] [23] [23] ;
_Bool arr_28 [23] ;
int arr_35 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 8006551386409193284LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-17275;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -817684447;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 3345546911U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 2020652853051009523ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 3207895942634952689ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 11270647985263187694ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)34886;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -1930324518;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)47059;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 152357096U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = 5343481092896162030LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 12170985070838568123ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -1707872078;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 208992638;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_35 [i_0] [i_1] = 1236257980;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
