#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27761;
int var_3 = -2097754218;
int var_6 = -1753735045;
int var_9 = 2099418367;
unsigned char var_10 = (unsigned char)226;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1002585535;
signed char var_22 = (signed char)-89;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 3575190964U;
unsigned char arr_0 [20] [20] ;
signed char arr_1 [20] ;
unsigned int arr_5 [17] ;
int arr_7 [17] ;
int arr_4 [12] ;
signed char arr_8 [17] [17] ;
unsigned char arr_9 [17] [17] ;
unsigned int arr_10 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)124 : (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1185875576U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 2013496198;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1769178364;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 73467928U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
