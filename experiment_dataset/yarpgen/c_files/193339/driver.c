#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2352987291331771861LL;
short var_2 = (short)19522;
unsigned int var_3 = 2687171683U;
short var_4 = (short)11638;
unsigned char var_6 = (unsigned char)130;
unsigned char var_7 = (unsigned char)251;
short var_8 = (short)-4958;
unsigned int var_9 = 1705392382U;
int zero = 0;
short var_11 = (short)31121;
_Bool var_12 = (_Bool)1;
long long int var_13 = 5043630834977841189LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)30857;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)56154;
unsigned long long int var_19 = 9588428402771119550ULL;
unsigned short var_20 = (unsigned short)33702;
long long int var_21 = 5509786223197278521LL;
unsigned char var_22 = (unsigned char)113;
unsigned char arr_0 [18] [18] ;
unsigned char arr_1 [18] ;
unsigned short arr_2 [18] ;
_Bool arr_4 [18] ;
_Bool arr_7 [18] [18] [18] [18] [18] [18] ;
_Bool arr_9 [22] ;
_Bool arr_10 [22] [22] ;
short arr_15 [19] ;
unsigned int arr_11 [22] [22] ;
long long int arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)767;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-29192 : (short)-6702;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 3571785383U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -2463545083374485544LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
