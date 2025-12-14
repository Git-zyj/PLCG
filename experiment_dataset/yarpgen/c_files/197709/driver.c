#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)18518;
unsigned short var_5 = (unsigned short)39663;
unsigned int var_8 = 827622609U;
unsigned short var_10 = (unsigned short)62812;
unsigned short var_11 = (unsigned short)31239;
unsigned long long int var_13 = 6099468876385888785ULL;
signed char var_14 = (signed char)119;
long long int var_15 = 6193069680674151544LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-72;
int var_22 = -1314638917;
unsigned int var_23 = 1226273090U;
unsigned char arr_0 [22] ;
unsigned short arr_1 [22] ;
int arr_2 [22] ;
unsigned short arr_3 [22] ;
int arr_4 [22] [22] [22] ;
unsigned int arr_5 [22] [22] ;
unsigned int arr_6 [22] ;
int arr_11 [21] ;
long long int arr_14 [21] ;
int arr_9 [22] [22] ;
int arr_10 [22] [22] [22] ;
unsigned char arr_15 [21] ;
_Bool arr_16 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)46714;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -513397613;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)24712;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2073844637 : 798017676;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3912170582U : 1908123455U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 163641052U : 3822682611U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -355592394;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 9200650475576337990LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -834393111 : 1882186460;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 876654909 : 1582297341;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
