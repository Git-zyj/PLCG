#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)86;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-44;
int zero = 0;
signed char var_11 = (signed char)-82;
unsigned int var_12 = 556972598U;
unsigned long long int var_13 = 1602523541482598ULL;
unsigned long long int var_14 = 161322850411325828ULL;
unsigned int var_15 = 1983548962U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-108;
unsigned short var_18 = (unsigned short)31497;
int var_19 = -1780837979;
int var_20 = 1132529608;
unsigned int var_21 = 2878653261U;
unsigned long long int var_22 = 7170349272773087662ULL;
int arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
_Bool arr_3 [20] [20] [20] ;
unsigned int arr_6 [20] [20] ;
_Bool arr_8 [20] [20] [20] [20] ;
int arr_9 [20] [20] [20] [20] [20] ;
signed char arr_10 [20] [20] [20] [20] [20] ;
unsigned short arr_15 [20] [20] [20] [20] ;
signed char arr_17 [20] ;
unsigned int arr_19 [20] [20] [20] ;
unsigned short arr_23 [20] [20] [20] [20] ;
unsigned short arr_2 [20] [20] ;
signed char arr_11 [20] [20] ;
_Bool arr_20 [20] ;
unsigned short arr_21 [20] [20] [20] ;
unsigned short arr_27 [20] ;
unsigned short arr_28 [20] [20] ;
unsigned int arr_31 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1842122494;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1024062292U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 2071256695U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -1163063404;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43960;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 2981041608U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15943;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)15732 : (unsigned short)59538;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)55 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)56223 : (unsigned short)27665;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65220 : (unsigned short)30978;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35614 : (unsigned short)19325;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_31 [i_0] = 3887253362U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
