#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1729227341133822957ULL;
unsigned int var_3 = 510674068U;
unsigned int var_7 = 1641791066U;
unsigned int var_9 = 1211636937U;
unsigned char var_10 = (unsigned char)130;
signed char var_12 = (signed char)0;
unsigned int var_14 = 3153666234U;
signed char var_15 = (signed char)1;
short var_17 = (short)28746;
unsigned char var_18 = (unsigned char)205;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 6693142181516297527LL;
unsigned char var_21 = (unsigned char)146;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-27668;
unsigned short var_25 = (unsigned short)32333;
long long int var_26 = -8808015749368897072LL;
unsigned long long int var_27 = 11026067428041679354ULL;
unsigned short var_28 = (unsigned short)44333;
short var_29 = (short)24720;
unsigned short var_30 = (unsigned short)8229;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)63;
_Bool var_33 = (_Bool)1;
unsigned char var_34 = (unsigned char)58;
signed char var_35 = (signed char)-83;
signed char var_36 = (signed char)-67;
unsigned char var_37 = (unsigned char)255;
short var_38 = (short)-7619;
unsigned short var_39 = (unsigned short)304;
unsigned char var_40 = (unsigned char)222;
unsigned long long int var_41 = 15875105447505992522ULL;
unsigned long long int var_42 = 13991962758803135552ULL;
signed char var_43 = (signed char)-58;
unsigned char var_44 = (unsigned char)119;
_Bool var_45 = (_Bool)1;
short var_46 = (short)-28275;
_Bool var_47 = (_Bool)0;
_Bool var_48 = (_Bool)1;
short var_49 = (short)2900;
long long int arr_0 [16] ;
signed char arr_1 [16] ;
unsigned int arr_2 [16] ;
unsigned long long int arr_5 [16] ;
short arr_6 [16] [16] [16] [16] ;
long long int arr_7 [16] [16] [16] ;
unsigned short arr_8 [16] [16] [16] ;
signed char arr_9 [16] [16] [16] ;
unsigned long long int arr_11 [16] [16] ;
unsigned int arr_12 [16] ;
_Bool arr_15 [16] ;
long long int arr_17 [16] ;
long long int arr_18 [16] [16] [16] [16] ;
unsigned int arr_19 [16] [16] ;
_Bool arr_21 [16] ;
_Bool arr_22 [16] [16] [16] [16] [16] ;
unsigned long long int arr_23 [16] [16] [16] [16] [16] [16] ;
short arr_24 [16] [16] [16] [16] ;
unsigned long long int arr_26 [16] [16] [16] [16] [16] [16] ;
signed char arr_32 [16] [16] [16] [16] [16] ;
unsigned int arr_36 [16] [16] [16] [16] [16] ;
unsigned short arr_37 [22] ;
unsigned long long int arr_38 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -4484337392883468015LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2719369052U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 14125472775224115107ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)27188;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 5918630146569455869LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)16549 : (unsigned short)24470;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 13617190201573532978ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 2402314149U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = -2965905847805520442LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -6547325575288344289LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = 3834026091U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11177224835124646046ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-20978 : (short)11418;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8452784626569767292ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 2394357755U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = (unsigned short)41579;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = 7463404160771524928ULL;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
