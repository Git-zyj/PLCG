#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -259570708879946696LL;
unsigned short var_2 = (unsigned short)3210;
_Bool var_3 = (_Bool)0;
int var_4 = -1422278678;
int var_5 = -938817930;
int var_6 = -10829702;
unsigned int var_7 = 3040339504U;
signed char var_8 = (signed char)-97;
unsigned int var_9 = 3129410776U;
unsigned int var_11 = 2885016003U;
int zero = 0;
unsigned int var_12 = 3746682791U;
int var_13 = 2085440761;
unsigned short var_14 = (unsigned short)9714;
int var_15 = -1882591371;
_Bool var_16 = (_Bool)0;
long long int var_17 = 6315612043714351483LL;
unsigned int var_18 = 4289259847U;
unsigned int var_19 = 975135917U;
int var_20 = -1987640986;
unsigned int var_21 = 118047278U;
unsigned int var_22 = 1888991243U;
_Bool var_23 = (_Bool)0;
int var_24 = -1085568123;
unsigned int var_25 = 695609638U;
unsigned int var_26 = 504413433U;
int var_27 = -422390677;
unsigned int var_28 = 1293947792U;
unsigned int var_29 = 3987235248U;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)82;
int var_32 = 1321878257;
unsigned char var_33 = (unsigned char)255;
int var_34 = 2122210577;
unsigned int var_35 = 1858292726U;
long long int var_36 = 5031179518567185771LL;
unsigned short var_37 = (unsigned short)4676;
_Bool var_38 = (_Bool)1;
int var_39 = 1339210455;
unsigned char var_40 = (unsigned char)225;
int var_41 = -1033464744;
int var_42 = -406250075;
unsigned int var_43 = 2333414472U;
unsigned char var_44 = (unsigned char)90;
unsigned short var_45 = (unsigned short)52342;
unsigned int var_46 = 3099246869U;
unsigned short var_47 = (unsigned short)23007;
int var_48 = -914388983;
int arr_0 [23] ;
int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] [23] [23] ;
int arr_4 [23] [23] ;
int arr_5 [23] [23] [23] ;
unsigned char arr_6 [23] ;
long long int arr_7 [23] [23] ;
_Bool arr_8 [23] ;
unsigned int arr_9 [23] [23] ;
unsigned int arr_12 [23] [23] [23] [23] [23] ;
long long int arr_13 [23] [23] ;
int arr_15 [23] [23] [23] ;
int arr_18 [23] [23] [23] ;
signed char arr_20 [23] [23] [23] [23] ;
unsigned int arr_28 [23] [23] [23] [23] ;
unsigned int arr_29 [23] [23] [23] [23] [23] [23] [23] ;
_Bool arr_33 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -529571223;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -97791642;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)37507;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)36171;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -228242601;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1916860412;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 6028144942494112704LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 3145793387U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 2481029986U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 2676392369370805031LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1230178360;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -677051772;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 2138678370U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 162169738U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
