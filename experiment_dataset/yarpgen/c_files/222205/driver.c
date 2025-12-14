#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17706611052019986378ULL;
unsigned short var_3 = (unsigned short)2638;
signed char var_6 = (signed char)111;
unsigned int var_7 = 2560131240U;
unsigned int var_8 = 3134304408U;
unsigned long long int var_9 = 6583500384569521813ULL;
unsigned short var_11 = (unsigned short)8685;
long long int var_12 = 6665946505852768953LL;
int zero = 0;
long long int var_13 = 7591222940673933483LL;
short var_14 = (short)6993;
unsigned int var_15 = 1138783913U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1854417152U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)27476;
_Bool var_20 = (_Bool)1;
int var_21 = -1227127577;
unsigned int var_22 = 3153485347U;
unsigned short var_23 = (unsigned short)3136;
int arr_1 [17] ;
unsigned short arr_8 [18] [18] ;
long long int arr_9 [18] ;
unsigned long long int arr_10 [18] ;
unsigned long long int arr_11 [18] [18] [18] ;
long long int arr_7 [17] ;
short arr_12 [18] [18] [18] ;
short arr_13 [18] ;
unsigned short arr_16 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1208306237;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)27971;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -1468667396722111161LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 17118345251625123385ULL : 15883405299194735280ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 10586956122907883327ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1798072358048564606LL : -9017880872243457093LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-17235 : (short)30070;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (short)25395;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned short)57031;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
