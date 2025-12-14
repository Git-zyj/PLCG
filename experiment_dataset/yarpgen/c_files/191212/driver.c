#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58009;
unsigned long long int var_2 = 11004325359477817119ULL;
signed char var_3 = (signed char)4;
unsigned long long int var_5 = 17572944377644630333ULL;
short var_7 = (short)7636;
unsigned short var_9 = (unsigned short)46286;
int var_11 = -161395045;
unsigned short var_13 = (unsigned short)58193;
int zero = 0;
unsigned short var_14 = (unsigned short)48764;
int var_15 = 1517591410;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)247;
unsigned short var_18 = (unsigned short)35849;
unsigned short var_19 = (unsigned short)64007;
int var_20 = -1447771407;
unsigned short arr_2 [12] ;
signed char arr_3 [12] ;
int arr_4 [12] ;
unsigned char arr_8 [12] [12] ;
unsigned short arr_9 [12] [12] [12] ;
unsigned short arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)31937;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1324957422;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)63254;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)40775;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
