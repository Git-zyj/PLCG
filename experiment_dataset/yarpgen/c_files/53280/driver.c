#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4979502981664067307LL;
_Bool var_1 = (_Bool)1;
int var_8 = -1934194600;
unsigned short var_11 = (unsigned short)35875;
unsigned long long int var_12 = 11448018683533807069ULL;
short var_14 = (short)-17227;
unsigned long long int var_15 = 7863926398566725299ULL;
int zero = 0;
unsigned long long int var_16 = 6128370011150115658ULL;
unsigned short var_17 = (unsigned short)51167;
signed char var_18 = (signed char)-118;
unsigned int var_19 = 1119143241U;
unsigned char var_20 = (unsigned char)179;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)249;
unsigned short var_24 = (unsigned short)19413;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)36296;
int arr_0 [14] [14] ;
_Bool arr_1 [14] ;
unsigned short arr_3 [19] ;
unsigned char arr_11 [19] [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] [19] ;
short arr_16 [19] ;
int arr_25 [19] ;
unsigned char arr_27 [19] [19] [19] [19] [19] [19] ;
long long int arr_2 [14] ;
unsigned char arr_6 [19] ;
unsigned short arr_20 [19] [19] [19] ;
int arr_28 [19] [19] [19] [19] [19] [19] ;
_Bool arr_29 [19] [19] [19] ;
unsigned char arr_30 [19] [19] ;
int arr_31 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1130397262;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)299;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 9509709935586128393ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (short)-6638;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = -1129354873;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 7866382122743322754LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)7575;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 738246454;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = -441624628;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
