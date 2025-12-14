#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1767589896U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 9934046367973585333ULL;
unsigned int var_6 = 2427771455U;
int var_7 = -575952847;
unsigned long long int var_8 = 16436192553189940866ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)39999;
unsigned long long int var_12 = 11372720595705120071ULL;
long long int var_14 = 5486191019239457697LL;
int zero = 0;
signed char var_15 = (signed char)71;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 18060291395835035561ULL;
long long int var_18 = 3818942295828576702LL;
unsigned int var_19 = 1872635608U;
int var_20 = -706704401;
unsigned int var_21 = 3224493382U;
short var_22 = (short)-12598;
short var_23 = (short)-441;
_Bool var_24 = (_Bool)0;
unsigned char arr_1 [11] ;
unsigned long long int arr_2 [11] ;
int arr_3 [11] ;
unsigned long long int arr_6 [23] ;
signed char arr_7 [23] ;
unsigned char arr_8 [23] ;
unsigned short arr_9 [23] [23] ;
unsigned int arr_11 [23] [23] ;
short arr_13 [23] ;
short arr_14 [23] ;
short arr_16 [23] [23] ;
int arr_17 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 3431022143901168131ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1371316166;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 9841655819903901084ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)53484;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 1734330268U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (short)5250;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (short)18332;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (short)11519;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = -1154310775;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
