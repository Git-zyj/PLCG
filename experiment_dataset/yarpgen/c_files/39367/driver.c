#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 809270890;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 17394378457246874976ULL;
int var_4 = 1881872919;
signed char var_6 = (signed char)116;
unsigned int var_7 = 3813352751U;
int var_9 = -150256465;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)153;
unsigned int var_13 = 3175496456U;
unsigned char var_14 = (unsigned char)20;
int var_16 = 1592176559;
_Bool var_17 = (_Bool)1;
unsigned int var_19 = 3956966U;
int zero = 0;
int var_20 = -372093296;
long long int var_21 = 6637343648064562166LL;
unsigned long long int var_22 = 17949349518699857948ULL;
long long int var_23 = -8433643232352067771LL;
unsigned int var_24 = 1183727669U;
unsigned int var_25 = 3321101036U;
_Bool var_26 = (_Bool)0;
int var_27 = -1548961155;
unsigned int var_28 = 968199491U;
signed char var_29 = (signed char)-57;
unsigned char var_30 = (unsigned char)128;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)40588;
unsigned char var_34 = (unsigned char)185;
_Bool var_35 = (_Bool)0;
unsigned char var_36 = (unsigned char)127;
_Bool var_37 = (_Bool)1;
unsigned int var_38 = 2001096698U;
unsigned char var_39 = (unsigned char)203;
unsigned short var_40 = (unsigned short)33326;
unsigned long long int var_41 = 1105649934801271579ULL;
unsigned short var_42 = (unsigned short)8112;
_Bool var_43 = (_Bool)1;
int var_44 = -2026343826;
unsigned long long int var_45 = 17996270948564597060ULL;
unsigned int var_46 = 800093255U;
_Bool var_47 = (_Bool)0;
unsigned int var_48 = 1193037453U;
signed char var_49 = (signed char)-50;
unsigned int var_50 = 1936594582U;
_Bool var_51 = (_Bool)1;
_Bool arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
signed char arr_4 [21] [21] ;
unsigned long long int arr_6 [21] [21] ;
unsigned char arr_7 [21] ;
unsigned short arr_9 [21] [21] [21] ;
long long int arr_10 [21] [21] [21] ;
_Bool arr_12 [21] [21] [21] [21] ;
unsigned int arr_13 [21] [21] [21] ;
long long int arr_21 [13] [13] [13] ;
signed char arr_23 [13] [13] [13] [13] ;
unsigned long long int arr_32 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1871093273U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 5909218998814039787ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)26012;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 7343132732698211849LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 754566003U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 4089566433877927065LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 1461839406958627118ULL;
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
    hash(&seed, var_50);
    hash(&seed, var_51);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
