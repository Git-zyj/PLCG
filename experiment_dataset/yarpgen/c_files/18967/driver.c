#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 654934198U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3726538140U;
short var_5 = (short)-4601;
short var_7 = (short)5116;
unsigned short var_9 = (unsigned short)42893;
long long int var_10 = 7109384640704470806LL;
short var_11 = (short)9902;
int var_12 = 490016378;
int var_13 = -146603196;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)216;
long long int var_17 = -4317362308351233073LL;
int zero = 0;
long long int var_18 = 7867537771418279681LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)62;
long long int var_21 = 5057548726186885173LL;
unsigned int var_22 = 233228675U;
unsigned short var_23 = (unsigned short)18084;
_Bool var_24 = (_Bool)1;
int var_25 = 1128207902;
int var_26 = 1993188643;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)82;
unsigned short var_29 = (unsigned short)44257;
int arr_0 [10] ;
unsigned short arr_4 [12] ;
unsigned short arr_5 [12] ;
unsigned char arr_7 [17] [17] ;
unsigned short arr_8 [17] [17] ;
unsigned short arr_11 [17] ;
unsigned short arr_12 [17] [17] ;
long long int arr_18 [17] [17] [17] [17] ;
unsigned char arr_19 [17] [17] [17] ;
unsigned short arr_23 [17] [17] [17] [17] ;
int arr_2 [10] ;
unsigned char arr_3 [10] ;
unsigned int arr_6 [12] ;
int arr_16 [17] [17] ;
short arr_17 [17] [17] [17] ;
unsigned short arr_22 [17] ;
unsigned char arr_25 [17] [17] [17] ;
unsigned char arr_26 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -114258300;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)20023;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)11200;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)41215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)36420;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)40034;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 9125667267739055349LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)16048 : (unsigned short)35478;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -234498224;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 394735787U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = -1132540148;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)843;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (unsigned short)7560;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)102 : (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)103 : (unsigned char)12;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
