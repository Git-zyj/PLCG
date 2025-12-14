#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -5646862482478220044LL;
unsigned int var_4 = 127793228U;
long long int var_6 = -4324597222046477705LL;
unsigned int var_10 = 4121180752U;
unsigned short var_11 = (unsigned short)6175;
long long int var_17 = 1408179564088488710LL;
unsigned int var_18 = 605335193U;
int zero = 0;
long long int var_20 = 7898643009131671144LL;
unsigned int var_21 = 2870372277U;
unsigned long long int var_22 = 86873327912537306ULL;
int var_23 = -981401547;
unsigned char var_24 = (unsigned char)89;
int var_25 = -326339710;
long long int var_26 = 1942701951479007100LL;
long long int var_27 = 4864411439068418671LL;
unsigned long long int var_28 = 1630776007342787664ULL;
int var_29 = -817385044;
unsigned char var_30 = (unsigned char)240;
int arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
unsigned long long int arr_4 [25] ;
long long int arr_6 [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
unsigned long long int arr_9 [25] ;
unsigned short arr_11 [25] [25] ;
long long int arr_16 [24] ;
unsigned char arr_5 [25] [25] [25] ;
short arr_8 [25] ;
unsigned char arr_13 [25] ;
_Bool arr_17 [24] [24] ;
_Bool arr_18 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -998578474;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 15791733416324067609ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 6035924485209445151ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8559229577841839696LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 2424917320107201378ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 12937702110962560450ULL : 17261679674842488112ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)42166;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = -8466872964751407504LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-2499;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)86 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
