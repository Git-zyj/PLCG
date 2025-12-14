#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1353705477;
int var_2 = -1740537206;
int var_5 = -1554636724;
short var_7 = (short)15468;
signed char var_9 = (signed char)57;
unsigned long long int var_11 = 11986740255483746420ULL;
unsigned long long int var_12 = 9760476353092051157ULL;
unsigned long long int var_13 = 9918135529441731684ULL;
unsigned int var_14 = 514296375U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)70;
unsigned int var_20 = 3349734785U;
signed char var_21 = (signed char)27;
int var_22 = -1178612869;
unsigned char var_23 = (unsigned char)141;
short var_24 = (short)3813;
unsigned long long int var_25 = 1958630250651243181ULL;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2337762498U;
unsigned short arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned short arr_6 [15] [15] [15] ;
unsigned int arr_7 [15] [15] ;
int arr_9 [15] [15] [15] ;
signed char arr_12 [20] ;
unsigned long long int arr_13 [20] ;
signed char arr_3 [15] [15] ;
unsigned int arr_8 [15] [15] ;
unsigned int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)36185;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)57473;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 2430645581U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1667193556;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = 11230856666514216488ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 1365032276U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 1712018612U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
