#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6913463903084665859ULL;
unsigned short var_1 = (unsigned short)28076;
unsigned long long int var_2 = 10412389507582017632ULL;
short var_3 = (short)-4882;
unsigned short var_5 = (unsigned short)57221;
unsigned int var_6 = 3440153513U;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8716545903842349077LL;
int var_9 = 1021934471;
short var_10 = (short)-20430;
unsigned long long int var_11 = 4646416472740365103ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)146;
unsigned short var_14 = (unsigned short)49878;
long long int var_15 = -7117872806096116251LL;
signed char var_16 = (signed char)111;
short var_17 = (short)-2441;
long long int var_18 = -8935785636975192791LL;
unsigned short var_19 = (unsigned short)9337;
long long int var_20 = -1026231214110552240LL;
int var_21 = -624769672;
signed char var_22 = (signed char)-2;
signed char arr_0 [19] ;
signed char arr_3 [19] ;
short arr_4 [19] [19] [19] ;
signed char arr_11 [24] ;
unsigned short arr_12 [24] [24] [24] ;
int arr_14 [24] [24] [24] ;
unsigned short arr_7 [19] [19] [19] [19] ;
unsigned short arr_17 [17] ;
signed char arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)6970 : (short)-27362;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)8166;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1525818657;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)28458 : (unsigned short)31043;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (unsigned short)4882;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (signed char)106;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
