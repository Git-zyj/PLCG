#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1804236356;
unsigned char var_2 = (unsigned char)191;
long long int var_3 = 4515943766447803991LL;
unsigned char var_6 = (unsigned char)250;
unsigned short var_7 = (unsigned short)13077;
unsigned char var_8 = (unsigned char)227;
long long int var_10 = -2677459949194381753LL;
int var_11 = -70223538;
unsigned long long int var_12 = 3660158211993267436ULL;
unsigned long long int var_13 = 70307440440608534ULL;
int zero = 0;
int var_14 = -1371408365;
unsigned short var_15 = (unsigned short)59115;
int var_16 = -337289467;
long long int var_17 = 4103599084054146522LL;
short var_18 = (short)5591;
unsigned long long int var_19 = 14791803471297043728ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)140;
int var_22 = -809712435;
long long int var_23 = 4676801311725784081LL;
long long int var_24 = -527741471872456207LL;
short var_25 = (short)30466;
short var_26 = (short)27659;
unsigned short var_27 = (unsigned short)53951;
signed char var_28 = (signed char)-43;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)7;
long long int var_31 = -7140700540693198133LL;
int var_32 = -1255145301;
int var_33 = 540131618;
unsigned long long int var_34 = 9095348266556217142ULL;
_Bool var_35 = (_Bool)0;
int arr_2 [22] [22] ;
int arr_3 [22] [22] ;
int arr_4 [22] ;
unsigned short arr_5 [22] [22] ;
_Bool arr_6 [22] [22] ;
unsigned char arr_7 [22] ;
unsigned long long int arr_8 [22] ;
short arr_9 [22] [22] ;
int arr_10 [22] ;
int arr_11 [22] ;
unsigned char arr_12 [22] [22] [22] ;
unsigned short arr_13 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -681178479;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -642913677;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -127732540;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)45083 : (unsigned short)3934;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)60 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 6833325875041928360ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-18452;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -1965122867;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 1106572068;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)37543;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
