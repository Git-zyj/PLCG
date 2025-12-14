#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 959302284U;
unsigned int var_1 = 3061012320U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1937922654U;
int var_4 = 170706223;
int var_5 = -1034446708;
long long int var_6 = 3717023843688072676LL;
long long int var_7 = -1533230148539678051LL;
unsigned long long int var_9 = 6317383693655509470ULL;
unsigned short var_10 = (unsigned short)20081;
signed char var_11 = (signed char)-15;
short var_12 = (short)24070;
signed char var_13 = (signed char)-21;
long long int var_14 = -7077686482832052220LL;
unsigned long long int var_15 = 14380934942291123461ULL;
int zero = 0;
short var_16 = (short)-4446;
unsigned char var_17 = (unsigned char)8;
long long int var_18 = -2709510581972183195LL;
int var_19 = -1622487465;
long long int var_20 = 8093256218779524978LL;
unsigned int var_21 = 2884081924U;
unsigned char var_22 = (unsigned char)72;
unsigned int var_23 = 1863819744U;
int var_24 = -1313579184;
long long int arr_0 [16] [16] ;
unsigned long long int arr_23 [25] ;
long long int arr_2 [16] ;
short arr_11 [16] [16] [16] [16] ;
long long int arr_18 [16] ;
unsigned int arr_24 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -487828652689256027LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 12952391695142125037ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 4187577117303429592LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)26368;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = 1396547254011896126LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = 2324865593U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
