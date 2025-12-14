#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9005003875826066828LL;
signed char var_1 = (signed char)-34;
signed char var_2 = (signed char)-51;
int var_5 = 65186858;
long long int var_7 = 6306969446332196597LL;
long long int var_9 = -2076128949696124810LL;
unsigned int var_10 = 3431052900U;
unsigned short var_13 = (unsigned short)21056;
short var_14 = (short)-9234;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 2069217551;
_Bool var_18 = (_Bool)1;
int var_19 = -578381738;
signed char var_20 = (signed char)-73;
unsigned char var_21 = (unsigned char)165;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)66;
long long int var_25 = -7289106004354980748LL;
unsigned int var_26 = 1912025317U;
unsigned char var_27 = (unsigned char)83;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-28630;
unsigned int var_30 = 3609544130U;
unsigned short var_31 = (unsigned short)59872;
int var_32 = -1745279677;
short arr_0 [13] ;
_Bool arr_1 [13] ;
int arr_2 [13] ;
int arr_4 [11] ;
int arr_5 [11] ;
unsigned int arr_7 [11] ;
int arr_10 [11] ;
short arr_11 [11] [11] [11] ;
short arr_14 [11] [11] ;
unsigned short arr_17 [11] [11] [11] [11] [11] ;
long long int arr_28 [11] [11] ;
short arr_44 [15] ;
unsigned int arr_8 [11] [11] ;
unsigned long long int arr_9 [11] [11] ;
unsigned char arr_13 [11] ;
int arr_27 [11] [11] ;
unsigned short arr_41 [10] ;
int arr_45 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)3527;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -67530228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1750688779;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 287976839;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 3631897914U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -210104836;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-8622;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (short)2829;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)59798;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_28 [i_0] [i_1] = -5694774299568350395LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_44 [i_0] = (short)13050;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 264842676U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 4828800257143659127ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_27 [i_0] [i_1] = 476796490;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33730 : (unsigned short)45588;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? -1117318185 : -186091240;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
