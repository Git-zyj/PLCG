#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12488;
unsigned int var_3 = 823349439U;
unsigned char var_5 = (unsigned char)20;
unsigned int var_7 = 1387246057U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)38;
int zero = 0;
unsigned int var_12 = 2823521307U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1170103396U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 4277691388U;
unsigned char var_18 = (unsigned char)223;
unsigned short var_19 = (unsigned short)13255;
signed char var_20 = (signed char)114;
signed char var_21 = (signed char)93;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 335659761U;
unsigned char arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned short arr_4 [20] ;
unsigned char arr_2 [25] ;
_Bool arr_3 [25] [25] ;
unsigned short arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 550275760U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)12895;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)4394;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
