#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
int var_2 = 1106236403;
unsigned int var_3 = 420692742U;
unsigned short var_4 = (unsigned short)32258;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-18717;
int var_10 = 1264766426;
unsigned int var_12 = 925960037U;
short var_13 = (short)24450;
unsigned short var_14 = (unsigned short)32291;
int zero = 0;
unsigned int var_15 = 4121381767U;
unsigned int var_16 = 3025668907U;
unsigned int var_17 = 3105816424U;
signed char var_18 = (signed char)-105;
unsigned char var_19 = (unsigned char)178;
unsigned long long int var_20 = 13206416961079969368ULL;
long long int var_21 = -259044955110241851LL;
short var_22 = (short)15205;
_Bool var_23 = (_Bool)0;
int arr_9 [23] [23] ;
short arr_10 [23] ;
_Bool arr_17 [23] [23] ;
signed char arr_19 [17] ;
_Bool arr_21 [17] ;
_Bool arr_24 [17] [17] [17] ;
unsigned long long int arr_27 [17] [17] [17] [17] ;
signed char arr_31 [17] [17] [17] [17] ;
unsigned char arr_8 [11] [11] ;
unsigned int arr_13 [23] [23] ;
unsigned short arr_14 [23] ;
unsigned short arr_15 [23] ;
unsigned int arr_18 [23] ;
long long int arr_33 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 553715448;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)-26042;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4479708852510218121ULL : 293722494883956345ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-38 : (signed char)-21;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)174 : (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 921384278U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned short)52720;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned short)29911;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 3395472328U : 67805802U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_33 [i_0] [i_1] = -556523871714949612LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
