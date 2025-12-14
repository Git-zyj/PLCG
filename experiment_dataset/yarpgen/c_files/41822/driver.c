#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53845;
short var_3 = (short)9838;
int var_4 = -366037755;
unsigned int var_5 = 587352103U;
unsigned long long int var_7 = 3163839292715541747ULL;
unsigned short var_8 = (unsigned short)11349;
int var_11 = 911187007;
short var_12 = (short)9622;
unsigned short var_13 = (unsigned short)63934;
unsigned short var_15 = (unsigned short)9454;
int zero = 0;
long long int var_16 = -3111210772635734972LL;
unsigned short var_17 = (unsigned short)51681;
unsigned short var_18 = (unsigned short)60813;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-19696;
unsigned long long int var_21 = 3409643069938782669ULL;
int var_22 = 289686079;
int arr_2 [22] ;
short arr_4 [22] [22] [22] ;
unsigned long long int arr_6 [22] ;
unsigned short arr_7 [22] [22] ;
int arr_9 [22] [22] [22] ;
unsigned short arr_12 [22] [22] [22] ;
unsigned short arr_13 [22] [22] [22] [22] ;
unsigned int arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1419774361;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)27260;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 8624271387579605475ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)45714;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1184148765;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)5526;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)652;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 3978868341U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
