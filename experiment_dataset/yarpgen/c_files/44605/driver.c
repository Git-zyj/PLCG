#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8836;
unsigned short var_2 = (unsigned short)58164;
int var_3 = -1148673660;
unsigned char var_4 = (unsigned char)213;
int var_5 = -1053005830;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)109;
unsigned short var_12 = (unsigned short)64037;
int zero = 0;
short var_14 = (short)20238;
long long int var_15 = -1171369807078936569LL;
_Bool var_16 = (_Bool)0;
int var_17 = 1337567380;
unsigned short var_18 = (unsigned short)22910;
unsigned short var_19 = (unsigned short)40334;
int var_20 = -402570549;
unsigned int var_21 = 3811238924U;
short var_22 = (short)29481;
int var_23 = 623626805;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 742948675U;
unsigned int var_26 = 1263806290U;
unsigned short var_27 = (unsigned short)65102;
int var_28 = 1227504829;
unsigned char arr_0 [14] ;
long long int arr_1 [14] ;
short arr_2 [14] [14] [14] ;
short arr_3 [14] [14] [14] ;
unsigned char arr_4 [14] [14] ;
int arr_5 [14] [14] ;
unsigned char arr_7 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_8 [14] [14] [14] [14] [14] [14] ;
_Bool arr_13 [15] ;
unsigned short arr_14 [15] [15] ;
short arr_15 [15] [15] ;
unsigned short arr_20 [15] [15] ;
int arr_22 [15] [15] [15] ;
long long int arr_25 [15] [15] ;
int arr_26 [15] [15] [15] [15] ;
unsigned short arr_27 [23] ;
unsigned int arr_28 [23] [23] ;
int arr_29 [23] ;
signed char arr_11 [14] [14] ;
unsigned char arr_12 [14] ;
int arr_16 [15] ;
_Bool arr_24 [15] [15] [15] [15] ;
long long int arr_30 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2960552698047692943LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-494;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)26211;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = -1828506027;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)13805;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (short)1141;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)51881;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 1385730760;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = 5826912825775193653LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -1256246726;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (unsigned short)11787;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = 3661349286U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? -1863529317 : -2126978546;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = -1762954364;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? -7967027796704733858LL : -2415446370076863652LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
