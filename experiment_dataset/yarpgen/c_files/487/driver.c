#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13318;
unsigned int var_1 = 117434706U;
unsigned int var_2 = 3264275838U;
unsigned int var_3 = 1631708349U;
unsigned int var_4 = 1409127809U;
unsigned char var_5 = (unsigned char)157;
int var_6 = -1889659358;
short var_7 = (short)-12355;
int var_9 = 354538683;
int zero = 0;
unsigned int var_10 = 371683820U;
int var_11 = -382209791;
unsigned char var_12 = (unsigned char)85;
unsigned int var_13 = 352400472U;
short var_14 = (short)4685;
unsigned char var_15 = (unsigned char)225;
unsigned int var_16 = 3366318742U;
unsigned int var_17 = 742273029U;
unsigned int var_18 = 55913780U;
short var_19 = (short)26351;
unsigned int var_20 = 2235842412U;
short var_21 = (short)19665;
int var_22 = 420327333;
unsigned int var_23 = 1607924389U;
int var_24 = 1410073663;
short var_25 = (short)-4601;
unsigned int var_26 = 1746640235U;
unsigned char var_27 = (unsigned char)169;
int var_28 = -1556207816;
short arr_1 [10] [10] ;
unsigned int arr_2 [10] ;
unsigned int arr_3 [10] ;
unsigned int arr_6 [10] ;
unsigned int arr_16 [10] [10] [10] [10] [10] ;
unsigned char arr_19 [13] ;
unsigned char arr_20 [13] ;
short arr_23 [13] ;
unsigned int arr_26 [13] ;
unsigned int arr_29 [13] [13] [13] ;
unsigned char arr_30 [13] [13] [13] [13] [13] [13] ;
short arr_32 [13] [13] [13] [13] [13] [13] ;
unsigned int arr_33 [18] ;
unsigned char arr_35 [18] [18] ;
unsigned int arr_4 [10] ;
unsigned char arr_7 [10] ;
unsigned int arr_8 [10] ;
unsigned int arr_18 [10] [10] ;
short arr_21 [13] ;
unsigned char arr_42 [18] ;
int arr_43 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-12631;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3007955432U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2641903005U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 529379752U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 3984949129U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (short)-22991;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = 2761522666U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 3658498079U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)26246;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_33 [i_0] = 3581931892U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1054306274U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 2615571077U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = 1789806726U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (short)22396;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 1370641755;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
