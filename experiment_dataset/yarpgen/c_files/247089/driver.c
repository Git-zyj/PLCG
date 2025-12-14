#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3566;
unsigned char var_1 = (unsigned char)43;
unsigned int var_2 = 840991383U;
int var_4 = -962648939;
signed char var_5 = (signed char)-49;
int var_6 = -425762371;
int var_7 = 317979731;
_Bool var_8 = (_Bool)0;
int var_9 = 665538227;
long long int var_10 = -1553441643614609011LL;
int zero = 0;
unsigned long long int var_11 = 18189542642418719826ULL;
int var_12 = 111025385;
unsigned int var_13 = 1572782128U;
int var_14 = 2029781653;
unsigned short var_15 = (unsigned short)7560;
unsigned long long int var_16 = 3900251702534362210ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1058225647092916182ULL;
signed char var_19 = (signed char)-91;
unsigned int var_20 = 2218700490U;
unsigned int var_21 = 1612431660U;
long long int var_22 = 6774791919280567325LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 9149254378805840056ULL;
unsigned int var_25 = 3633728205U;
short var_26 = (short)-30729;
signed char var_27 = (signed char)-112;
long long int var_28 = 3694742564839030625LL;
unsigned int var_29 = 1974215298U;
_Bool var_30 = (_Bool)1;
unsigned char arr_1 [12] ;
long long int arr_5 [16] ;
long long int arr_7 [24] ;
unsigned char arr_8 [24] ;
unsigned char arr_9 [24] [24] ;
signed char arr_12 [24] ;
_Bool arr_15 [24] [24] [24] [24] ;
unsigned short arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -2523357496592156733LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 418490007877425682LL : -7027991961476930928LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38032 : (unsigned short)30518;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
