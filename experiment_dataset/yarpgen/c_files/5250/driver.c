#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 59797279;
short var_2 = (short)25646;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 4159912286U;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)33939;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2172755513U;
signed char var_14 = (signed char)-90;
short var_15 = (short)7303;
unsigned short var_16 = (unsigned short)60536;
unsigned long long int var_17 = 8970388624322694032ULL;
signed char var_18 = (signed char)-37;
long long int var_19 = -1270082281012060388LL;
signed char var_20 = (signed char)-126;
unsigned int var_21 = 3435304552U;
int var_22 = -708954582;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 11109846403364138769ULL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 1899649629021372497ULL;
unsigned long long int var_27 = 5691254569997781270ULL;
_Bool var_28 = (_Bool)1;
unsigned int arr_0 [21] ;
short arr_3 [21] [21] ;
_Bool arr_4 [21] ;
unsigned char arr_8 [21] ;
int arr_14 [21] ;
unsigned char arr_15 [21] [21] ;
unsigned char arr_16 [21] [21] [21] [21] [21] ;
short arr_17 [21] [21] [21] [21] [21] ;
signed char arr_19 [21] [21] ;
unsigned long long int arr_23 [11] ;
unsigned char arr_26 [19] ;
long long int arr_32 [25] ;
signed char arr_5 [21] ;
unsigned short arr_18 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_29 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1206115U : 942243530U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-15441;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)166 : (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 381024592;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)217 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)32442;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = 9613029528490909509ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = 6571101408692394155LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)2 : (signed char)-16;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)44966 : (unsigned short)52213;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_29 [i_0] [i_1] = 1204517431201227624ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
