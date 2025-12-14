#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3667856247U;
int var_4 = -1988744726;
unsigned int var_5 = 3125208080U;
unsigned int var_9 = 481426080U;
unsigned char var_10 = (unsigned char)27;
unsigned int var_11 = 68905476U;
unsigned char var_13 = (unsigned char)80;
signed char var_14 = (signed char)-12;
unsigned char var_15 = (unsigned char)232;
long long int var_16 = 3868578151742192228LL;
long long int var_17 = -7176197064290095302LL;
unsigned int var_18 = 4129109939U;
unsigned short var_19 = (unsigned short)24009;
int zero = 0;
unsigned short var_20 = (unsigned short)62647;
int var_21 = -1376853007;
int var_22 = -404735538;
unsigned char var_23 = (unsigned char)242;
int var_24 = 1710556812;
unsigned short var_25 = (unsigned short)12351;
signed char var_26 = (signed char)16;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 3000558504U;
unsigned int var_32 = 2573352090U;
long long int var_33 = -3413171080743109168LL;
signed char var_34 = (signed char)28;
int var_35 = 166884543;
signed char var_36 = (signed char)74;
int var_37 = -547344911;
signed char var_38 = (signed char)41;
unsigned long long int var_39 = 8834290578098002979ULL;
short var_40 = (short)-11990;
signed char var_41 = (signed char)-99;
_Bool var_42 = (_Bool)1;
unsigned short var_43 = (unsigned short)13584;
short var_44 = (short)-4647;
unsigned short var_45 = (unsigned short)46471;
unsigned short var_46 = (unsigned short)59979;
int var_47 = 1301272766;
unsigned int arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned short arr_4 [10] ;
_Bool arr_5 [10] ;
signed char arr_6 [10] ;
int arr_10 [10] [10] [10] [10] ;
int arr_11 [10] [10] ;
signed char arr_12 [10] ;
_Bool arr_15 [10] [10] ;
long long int arr_17 [10] [10] [10] ;
unsigned char arr_19 [10] [10] [10] [10] ;
unsigned char arr_26 [10] [10] [10] [10] ;
int arr_36 [10] [10] [10] ;
signed char arr_42 [25] ;
long long int arr_43 [25] [25] ;
unsigned int arr_44 [25] [25] ;
long long int arr_2 [10] [10] ;
unsigned int arr_3 [10] ;
_Bool arr_16 [10] [10] ;
unsigned short arr_28 [10] [10] [10] ;
int arr_41 [10] ;
unsigned char arr_47 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 380522751U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)41654;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1226541953;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 1437994297;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -7850239039424594786LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 155248298;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_43 [i_0] [i_1] = 3417829286094834881LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_44 [i_0] [i_1] = 2222588888U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -6149300596379652860LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2814621329U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned short)45337;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = -1133323356;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned char)255;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
