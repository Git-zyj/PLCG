#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9113220120827910217ULL;
unsigned int var_1 = 3082683492U;
long long int var_2 = 1713038917124512772LL;
unsigned long long int var_3 = 7478614231673507138ULL;
unsigned int var_4 = 1609811999U;
unsigned int var_5 = 2482229197U;
unsigned int var_6 = 1199496465U;
long long int var_7 = 3158980197544734338LL;
unsigned int var_8 = 944667381U;
int var_9 = 333519591;
unsigned long long int var_10 = 16763182590460637082ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1044990619737730329LL;
signed char var_13 = (signed char)18;
short var_14 = (short)-23146;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3640805518U;
short var_17 = (short)2723;
short var_18 = (short)5596;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6590191086652199222LL;
int var_21 = 1162406996;
_Bool var_22 = (_Bool)1;
int var_23 = 1965707451;
unsigned int var_24 = 3758627284U;
unsigned long long int var_25 = 10045135590325769917ULL;
_Bool var_26 = (_Bool)0;
short var_27 = (short)4831;
long long int var_28 = 58085038820342532LL;
signed char arr_2 [18] [18] ;
unsigned int arr_3 [18] ;
unsigned int arr_4 [18] ;
unsigned long long int arr_5 [18] [18] ;
unsigned int arr_6 [18] [18] ;
unsigned int arr_7 [18] [18] [18] ;
_Bool arr_8 [18] ;
unsigned short arr_9 [15] ;
unsigned int arr_12 [13] [13] ;
unsigned int arr_13 [13] ;
int arr_15 [13] [13] ;
unsigned int arr_20 [13] [13] ;
short arr_32 [15] ;
long long int arr_11 [15] ;
signed char arr_18 [13] [13] [13] ;
short arr_19 [13] [13] ;
unsigned int arr_23 [13] ;
unsigned int arr_28 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1093710351U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2514860223U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 10242320440282559181ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 1157498080U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1169990317U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)56319;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 4138139661U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 1523393012U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 1713335350;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = 54911239U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = (short)-19183;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -8308085640642568600LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (short)-3152;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = 640329727U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = 3737746564U;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
