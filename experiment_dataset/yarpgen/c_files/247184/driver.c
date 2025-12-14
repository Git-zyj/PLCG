#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned long long int var_1 = 13410867682576020326ULL;
unsigned char var_3 = (unsigned char)7;
unsigned long long int var_4 = 17224296066963354556ULL;
_Bool var_5 = (_Bool)0;
long long int var_7 = -2761631497596831696LL;
int var_8 = -801969728;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 11815343796651986682ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)41308;
unsigned int var_12 = 3181935358U;
long long int var_13 = -3515622802953969480LL;
short var_14 = (short)-10193;
unsigned char var_15 = (unsigned char)207;
unsigned char arr_0 [24] ;
int arr_1 [24] [24] ;
unsigned long long int arr_3 [24] ;
unsigned char arr_4 [24] ;
unsigned char arr_2 [24] ;
unsigned short arr_6 [24] ;
_Bool arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 852065904;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 5865236831277323381ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)33914;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
