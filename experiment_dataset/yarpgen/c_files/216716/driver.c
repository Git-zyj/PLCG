#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1224319773U;
signed char var_2 = (signed char)-7;
unsigned long long int var_3 = 11978977766453599460ULL;
unsigned short var_4 = (unsigned short)182;
unsigned int var_5 = 1515973404U;
unsigned long long int var_6 = 2172071021530715312ULL;
unsigned int var_7 = 458385806U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1421545301U;
signed char var_11 = (signed char)57;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3609509519550696026LL;
unsigned int var_14 = 3067905681U;
unsigned short var_15 = (unsigned short)22431;
int var_16 = 618201345;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)27074;
unsigned char var_19 = (unsigned char)23;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned int arr_0 [24] ;
_Bool arr_2 [24] ;
_Bool arr_3 [24] ;
signed char arr_4 [24] [24] [24] ;
unsigned int arr_5 [24] [24] [24] [24] ;
short arr_6 [15] ;
unsigned long long int arr_10 [25] ;
_Bool arr_11 [25] ;
unsigned long long int arr_9 [15] ;
signed char arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3649888859U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1235711819U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)25180;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 8158485619952691605ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 1238275483096169682ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)91;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
