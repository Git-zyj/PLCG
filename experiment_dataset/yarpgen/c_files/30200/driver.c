#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)66;
signed char var_3 = (signed char)-61;
unsigned char var_4 = (unsigned char)223;
short var_5 = (short)32263;
unsigned char var_6 = (unsigned char)130;
long long int var_7 = -7246256839486899033LL;
long long int var_8 = -9123190997639826060LL;
signed char var_10 = (signed char)-91;
unsigned char var_11 = (unsigned char)89;
unsigned int var_12 = 3816969644U;
unsigned short var_13 = (unsigned short)51794;
unsigned char var_14 = (unsigned char)168;
unsigned short var_16 = (unsigned short)972;
signed char var_17 = (signed char)89;
long long int var_18 = 3896738351535555135LL;
int zero = 0;
signed char var_19 = (signed char)-14;
int var_20 = 372259795;
short var_21 = (short)16072;
int var_22 = 133830743;
short var_23 = (short)16196;
int var_24 = -1656031211;
long long int var_25 = -3389419309884556850LL;
unsigned int var_26 = 2963623986U;
long long int var_27 = -6696041996689253736LL;
int var_28 = 934146619;
long long int var_29 = 7174491194201108804LL;
int var_30 = -612544141;
signed char var_31 = (signed char)-69;
unsigned char var_32 = (unsigned char)247;
signed char var_33 = (signed char)-65;
signed char var_34 = (signed char)39;
_Bool arr_0 [13] ;
signed char arr_4 [13] [13] ;
signed char arr_7 [21] [21] ;
unsigned long long int arr_9 [21] ;
unsigned char arr_10 [21] ;
unsigned short arr_13 [21] ;
long long int arr_15 [21] [21] [21] ;
int arr_16 [21] [21] [21] [21] ;
unsigned long long int arr_25 [21] ;
unsigned char arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 17765271827150998139ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned short)31185;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -8626751875520914376LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1133402897;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = 6273922122031859484ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)17;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
