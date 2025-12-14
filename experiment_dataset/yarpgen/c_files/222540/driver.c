#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
_Bool var_2 = (_Bool)1;
short var_3 = (short)8775;
unsigned int var_4 = 331628180U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)58599;
unsigned int var_7 = 2462591178U;
unsigned int var_8 = 2633283854U;
unsigned long long int var_9 = 17327713574904480775ULL;
unsigned char var_11 = (unsigned char)240;
_Bool var_12 = (_Bool)1;
short var_13 = (short)11418;
unsigned int var_15 = 1323465883U;
int zero = 0;
short var_16 = (short)28376;
unsigned int var_17 = 3573680488U;
signed char var_18 = (signed char)-71;
unsigned long long int var_19 = 7864790930595946567ULL;
unsigned int var_20 = 3206203060U;
unsigned char var_21 = (unsigned char)144;
_Bool arr_3 [10] ;
signed char arr_8 [12] ;
unsigned int arr_9 [12] [12] [12] ;
unsigned short arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3054135331U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)51875;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
