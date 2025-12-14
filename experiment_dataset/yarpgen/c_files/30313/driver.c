#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
long long int var_2 = -753889603053488925LL;
int var_3 = 561881121;
unsigned long long int var_4 = 3930033488639141885ULL;
unsigned long long int var_5 = 7170594537498944564ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)7115;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 783266353U;
unsigned int var_19 = 724739339U;
unsigned char var_20 = (unsigned char)34;
short var_21 = (short)2014;
_Bool var_22 = (_Bool)0;
int var_23 = 551347517;
int arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
_Bool arr_2 [23] ;
int arr_3 [23] [23] ;
unsigned short arr_4 [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1221685782;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 873908217U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -182481043;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)48176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)3624;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
