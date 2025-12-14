#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12276225708437833894ULL;
signed char var_1 = (signed char)-119;
unsigned long long int var_4 = 2900656685607992234ULL;
long long int var_6 = -5455931704113747093LL;
unsigned int var_8 = 240692196U;
short var_9 = (short)-15347;
signed char var_10 = (signed char)-107;
int var_11 = -1598543909;
_Bool var_12 = (_Bool)1;
short var_13 = (short)5083;
long long int var_14 = 4085972253290714352LL;
unsigned short var_16 = (unsigned short)35447;
unsigned char var_17 = (unsigned char)137;
int zero = 0;
unsigned int var_18 = 1562504600U;
unsigned int var_19 = 2186659695U;
unsigned int var_20 = 3468002507U;
unsigned char var_21 = (unsigned char)57;
unsigned long long int var_22 = 2955308084236242224ULL;
unsigned long long int var_23 = 4571084102925057428ULL;
_Bool var_24 = (_Bool)1;
short var_25 = (short)24924;
unsigned char var_26 = (unsigned char)219;
signed char var_27 = (signed char)-97;
short var_28 = (short)-5115;
unsigned long long int arr_1 [12] ;
_Bool arr_2 [12] [12] ;
unsigned short arr_5 [18] [18] ;
unsigned long long int arr_6 [18] [18] ;
_Bool arr_9 [16] [16] ;
unsigned int arr_10 [16] ;
_Bool arr_11 [16] ;
short arr_4 [12] ;
signed char arr_7 [18] ;
_Bool arr_12 [16] [16] ;
long long int arr_15 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 9007364927150178611ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)39834;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 16867964103043722999ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 3174007948U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-30811;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1533004917206807491LL : 8381897995321035556LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
