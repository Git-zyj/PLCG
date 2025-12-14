#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2741;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-14446;
int var_4 = 1355202486;
long long int var_5 = 1107307825622678274LL;
short var_6 = (short)-2806;
short var_9 = (short)-695;
int var_10 = -299303886;
int zero = 0;
short var_11 = (short)8800;
int var_12 = 1030806647;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2255918899U;
short var_15 = (short)21028;
short var_16 = (short)-22661;
signed char var_17 = (signed char)-89;
_Bool arr_2 [23] ;
int arr_5 [23] [23] ;
short arr_6 [23] [23] ;
int arr_7 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 666721398;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)31717;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1356331501;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
