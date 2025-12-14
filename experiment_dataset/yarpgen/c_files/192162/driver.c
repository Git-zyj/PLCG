#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1429198526150013987LL;
signed char var_3 = (signed char)-98;
unsigned long long int var_4 = 9554317098440428201ULL;
unsigned int var_7 = 158392836U;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7319644147059976695LL;
long long int var_10 = 372691364217102060LL;
int zero = 0;
long long int var_12 = 2215453038905903246LL;
unsigned char var_13 = (unsigned char)117;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)53196;
long long int var_17 = -9034728147095794287LL;
unsigned long long int var_18 = 8750364359070626762ULL;
signed char var_19 = (signed char)-107;
unsigned short var_20 = (unsigned short)36374;
unsigned int var_21 = 1129632373U;
short arr_0 [22] ;
unsigned long long int arr_3 [23] ;
signed char arr_4 [23] ;
_Bool arr_8 [12] [12] ;
unsigned long long int arr_9 [12] ;
_Bool arr_11 [12] [12] ;
unsigned char arr_12 [12] ;
long long int arr_2 [22] ;
long long int arr_5 [23] ;
signed char arr_6 [23] ;
unsigned long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)19853;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2947297844354059132ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 15009364024433795228ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -4410375138346620969LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 5662923553011672258LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 16894210030712145495ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
