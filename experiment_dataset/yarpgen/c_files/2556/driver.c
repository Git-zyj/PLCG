#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1068046514;
long long int var_2 = -3086130497557068811LL;
int var_3 = 1970442065;
long long int var_4 = -7910500468003072909LL;
int var_6 = -1002057415;
unsigned int var_7 = 508116868U;
signed char var_8 = (signed char)-1;
unsigned long long int var_9 = 15933286904834960038ULL;
int var_10 = 1759984734;
int zero = 0;
unsigned char var_11 = (unsigned char)83;
_Bool var_12 = (_Bool)0;
long long int var_13 = -1218555718200254645LL;
_Bool var_14 = (_Bool)1;
int var_15 = 1488859593;
short var_16 = (short)-32315;
unsigned short var_17 = (unsigned short)8038;
short var_18 = (short)-18287;
int var_19 = -697808829;
unsigned char var_20 = (unsigned char)228;
unsigned int var_21 = 2261376778U;
_Bool var_22 = (_Bool)0;
int var_23 = 1604905018;
unsigned short var_24 = (unsigned short)5210;
unsigned char var_25 = (unsigned char)93;
unsigned char var_26 = (unsigned char)177;
int var_27 = 1596840689;
unsigned char var_28 = (unsigned char)20;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)-20;
int var_31 = 377048291;
int var_32 = 1488042554;
unsigned int var_33 = 635844398U;
short var_34 = (short)-6171;
signed char var_35 = (signed char)-20;
long long int var_36 = 4986739987496253749LL;
unsigned short var_37 = (unsigned short)7078;
int var_38 = 1851187631;
long long int var_39 = 3705837633821148231LL;
int var_40 = -1351232283;
int arr_0 [24] [24] ;
signed char arr_1 [24] ;
_Bool arr_4 [24] ;
_Bool arr_6 [24] [24] [24] [24] ;
short arr_8 [24] [24] [24] ;
_Bool arr_9 [24] [24] [24] ;
unsigned long long int arr_10 [24] [24] ;
unsigned long long int arr_11 [24] [24] ;
short arr_12 [24] [24] [24] [24] ;
int arr_13 [24] [24] [24] [24] ;
unsigned short arr_14 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_24 [24] [24] [24] [24] ;
short arr_30 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -1683660403;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-26514;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 6098411929169292263ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 4763619953522399111ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)15734;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1214454095;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)21600;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (short)30541;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
