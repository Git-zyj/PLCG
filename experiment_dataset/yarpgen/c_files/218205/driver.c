#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7801;
unsigned long long int var_2 = 9023142920805625013ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 8188480623352403348ULL;
unsigned long long int var_5 = 17526725383748249437ULL;
short var_7 = (short)-17652;
unsigned char var_9 = (unsigned char)201;
unsigned char var_11 = (unsigned char)192;
unsigned int var_13 = 3069228712U;
short var_16 = (short)-21890;
int zero = 0;
unsigned int var_17 = 3399758836U;
unsigned char var_18 = (unsigned char)120;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)4371;
long long int var_21 = -5066934124170973922LL;
unsigned char var_22 = (unsigned char)134;
unsigned short var_23 = (unsigned short)13131;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 4970662145055462557ULL;
short var_27 = (short)19926;
unsigned short var_28 = (unsigned short)14488;
short var_29 = (short)-9760;
int var_30 = 1919768095;
_Bool var_31 = (_Bool)1;
long long int var_32 = -8091293089398517166LL;
signed char var_33 = (signed char)-55;
unsigned int arr_0 [10] [10] ;
short arr_1 [10] ;
short arr_4 [18] ;
int arr_6 [18] ;
unsigned short arr_7 [18] ;
_Bool arr_11 [18] [18] ;
unsigned short arr_13 [18] [18] [18] [18] ;
short arr_18 [24] ;
unsigned short arr_20 [25] [25] ;
short arr_21 [25] ;
_Bool arr_22 [25] ;
unsigned long long int arr_25 [25] [25] [25] [25] ;
int arr_26 [25] [25] [25] [25] ;
int arr_2 [10] ;
unsigned short arr_3 [10] ;
signed char arr_24 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 353483064U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)3044;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-5242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1117505026;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)61266;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)18471;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (short)26029;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)50251;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (short)-21771;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 15522387948084268323ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -1469971959;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 478268246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)44623;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)-98;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
