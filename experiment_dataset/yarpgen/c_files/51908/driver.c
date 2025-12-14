#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 618038251;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2913225938U;
unsigned short var_6 = (unsigned short)59829;
short var_7 = (short)3040;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1409929589634308269LL;
unsigned long long int var_13 = 2383155311474177485ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)126;
unsigned short var_18 = (unsigned short)24184;
unsigned short var_19 = (unsigned short)64346;
int zero = 0;
signed char var_20 = (signed char)-109;
unsigned short var_21 = (unsigned short)56113;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)106;
unsigned char var_24 = (unsigned char)183;
unsigned short var_25 = (unsigned short)11853;
signed char var_26 = (signed char)39;
unsigned long long int var_27 = 15898960440108807614ULL;
short var_28 = (short)25242;
unsigned long long int var_29 = 6165634251901966213ULL;
unsigned short var_30 = (unsigned short)56009;
signed char var_31 = (signed char)108;
unsigned long long int var_32 = 4067898634517248119ULL;
short var_33 = (short)-20849;
signed char var_34 = (signed char)-52;
unsigned long long int var_35 = 8569614518379770299ULL;
short var_36 = (short)-31934;
_Bool var_37 = (_Bool)0;
unsigned char var_38 = (unsigned char)49;
_Bool var_39 = (_Bool)0;
unsigned long long int arr_0 [12] ;
signed char arr_1 [12] [12] ;
unsigned char arr_2 [12] ;
short arr_3 [12] [12] ;
short arr_6 [16] ;
short arr_8 [16] [16] ;
long long int arr_10 [16] [16] ;
unsigned long long int arr_11 [16] [16] [16] ;
unsigned short arr_12 [16] ;
unsigned long long int arr_13 [16] [16] ;
long long int arr_14 [16] [16] ;
short arr_15 [16] [16] ;
unsigned long long int arr_17 [16] [16] ;
unsigned long long int arr_20 [16] [16] [16] ;
_Bool arr_4 [12] ;
long long int arr_5 [12] ;
short arr_16 [16] ;
long long int arr_19 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 15308567414977817503ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-5879;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-26664;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)3541 : (short)30112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = 2526652103402659361LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 16763217309568275859ULL : 6658178129807079968ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54166 : (unsigned short)65199;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 14105370821213685932ULL : 13080321661193429515ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -6688067290917159573LL : -5950476674349746672LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5367 : (short)11629;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = 17483190655571574147ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 12890196026277812914ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -3988333692446014868LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)3075 : (short)-11406;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = 7215853319375271197LL;
}

void checksum() {
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
