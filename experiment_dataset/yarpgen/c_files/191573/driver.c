#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
long long int var_1 = -513023572851825622LL;
unsigned char var_3 = (unsigned char)153;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = 1081318303172378678LL;
signed char var_8 = (signed char)109;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-29878;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -2159654948095481434LL;
unsigned short var_14 = (unsigned short)26652;
unsigned int var_15 = 2769275269U;
unsigned int var_16 = 2413268246U;
unsigned int var_17 = 2664218622U;
long long int var_18 = 1398179089528354297LL;
long long int var_19 = -2655653696246609493LL;
_Bool arr_0 [22] [22] ;
short arr_1 [22] [22] ;
unsigned short arr_4 [22] [22] [22] ;
short arr_6 [22] [22] [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-31562;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)27957;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)14033;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = -3515029332492330963LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
