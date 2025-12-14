#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2547883897U;
unsigned char var_1 = (unsigned char)144;
signed char var_2 = (signed char)81;
int var_3 = 1287016124;
short var_4 = (short)318;
long long int var_5 = 3536042124761572708LL;
unsigned short var_6 = (unsigned short)28319;
unsigned int var_7 = 3061445824U;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-32575;
unsigned short var_12 = (unsigned short)13122;
unsigned short var_14 = (unsigned short)10948;
int var_16 = -2017469918;
int var_18 = 1203753605;
unsigned char var_19 = (unsigned char)174;
int zero = 0;
unsigned char var_20 = (unsigned char)58;
unsigned long long int var_21 = 2764636888812628662ULL;
unsigned int var_22 = 3883760492U;
int var_23 = 813198730;
_Bool var_24 = (_Bool)1;
int var_25 = 1934304487;
unsigned char var_26 = (unsigned char)55;
short var_27 = (short)-28719;
short var_28 = (short)-22855;
long long int var_29 = 8594389858199682375LL;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)109;
unsigned short var_32 = (unsigned short)23464;
short var_33 = (short)22511;
unsigned short var_34 = (unsigned short)59638;
unsigned int var_35 = 3442296031U;
int var_36 = -1178957700;
unsigned long long int var_37 = 2719252429388679736ULL;
int arr_0 [21] ;
_Bool arr_1 [21] ;
long long int arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
_Bool arr_5 [10] ;
_Bool arr_6 [10] ;
unsigned int arr_10 [10] [10] [10] ;
unsigned char arr_11 [10] ;
unsigned short arr_13 [10] [10] [10] [10] ;
unsigned int arr_16 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_17 [10] [10] [10] [10] ;
signed char arr_18 [10] [10] [10] [10] ;
unsigned short arr_19 [10] ;
unsigned short arr_22 [10] [10] ;
unsigned char arr_29 [14] ;
signed char arr_31 [14] [14] ;
_Bool arr_4 [21] ;
unsigned short arr_12 [10] [10] [10] ;
long long int arr_15 [10] ;
short arr_24 [10] ;
unsigned long long int arr_28 [14] ;
unsigned short arr_33 [14] ;
long long int arr_34 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1422689047;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -6120050261162561421LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)31225;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 633757103U : 1597247323U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)26717;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 1123869827U : 889779176U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)34802 : (unsigned short)28565;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-27 : (signed char)20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (unsigned short)21485;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)17118 : (unsigned short)40209;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_31 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)17875 : (unsigned short)21662;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -7841772715617260328LL : 8688045968869728686LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (short)32301 : (short)-23751;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 14617731648881026656ULL : 11440903282288874408ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = (unsigned short)16526;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_34 [i_0] = -2346035392289869567LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
