#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61536;
signed char var_2 = (signed char)120;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3464186878U;
unsigned short var_6 = (unsigned short)29492;
unsigned int var_10 = 2598334782U;
unsigned char var_12 = (unsigned char)143;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3401288452U;
short var_15 = (short)-12673;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_20 = 1146293194;
int var_21 = -949890238;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)44684;
signed char var_24 = (signed char)34;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 1299590587U;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 176705571U;
unsigned short var_29 = (unsigned short)17561;
short var_30 = (short)-18323;
short var_31 = (short)-15391;
unsigned int var_32 = 2991670104U;
unsigned char var_33 = (unsigned char)217;
unsigned char var_34 = (unsigned char)14;
_Bool var_35 = (_Bool)0;
signed char var_36 = (signed char)-24;
short var_37 = (short)18279;
unsigned int var_38 = 2782554171U;
unsigned char var_39 = (unsigned char)158;
signed char arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
signed char arr_3 [19] ;
unsigned int arr_4 [19] ;
unsigned char arr_5 [19] [19] [19] [19] ;
int arr_7 [19] [19] [19] [19] ;
unsigned int arr_8 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_26 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1959983501U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2998004766U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1259125858;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 112942685U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = 1195560204U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
