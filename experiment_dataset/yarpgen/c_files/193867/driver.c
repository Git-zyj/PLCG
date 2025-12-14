#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 91996686;
unsigned long long int var_1 = 2617740424133882256ULL;
int var_3 = -1533381821;
unsigned int var_5 = 3482227891U;
signed char var_7 = (signed char)-104;
unsigned long long int var_10 = 11951630417090611901ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-89;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1418384528U;
unsigned char var_15 = (unsigned char)202;
int zero = 0;
unsigned char var_16 = (unsigned char)82;
unsigned char var_17 = (unsigned char)130;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1334943569U;
signed char var_20 = (signed char)115;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
int var_23 = 563926211;
signed char var_24 = (signed char)19;
unsigned int arr_0 [20] ;
long long int arr_1 [20] [20] ;
unsigned short arr_3 [24] ;
unsigned int arr_4 [24] ;
unsigned long long int arr_8 [24] [24] [24] ;
int arr_9 [24] ;
unsigned short arr_15 [24] ;
_Bool arr_17 [24] ;
signed char arr_18 [24] [24] ;
int arr_21 [13] ;
unsigned int arr_2 [20] ;
unsigned long long int arr_6 [24] ;
unsigned int arr_11 [24] [24] [24] [24] ;
_Bool arr_12 [24] [24] ;
int arr_13 [24] [24] [24] ;
_Bool arr_14 [24] [24] ;
unsigned int arr_19 [24] [24] ;
long long int arr_24 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 105109873U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 2227188533029778584LL : 7728263441692040482LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42951 : (unsigned short)38420;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3044700877U : 150932269U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 17214720908121795569ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1393730358 : 1772456971;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned short)42349;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 1129419626;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2262773154U : 370118952U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7664552530407493952ULL : 3231830890595367382ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4264147413U : 2940489823U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1006525885 : 887350397;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = 4150380570U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = 6649107080894623314LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
