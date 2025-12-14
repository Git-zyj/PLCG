#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2665278124818048034ULL;
unsigned long long int var_5 = 8694930507313889186ULL;
short var_6 = (short)4854;
long long int var_13 = 4218094341847275323LL;
int var_14 = -1499576720;
unsigned int var_15 = 1089477409U;
int zero = 0;
unsigned long long int var_19 = 11125307163339456927ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)15483;
unsigned int var_22 = 2676432445U;
int var_23 = -348194188;
unsigned char var_24 = (unsigned char)181;
unsigned short var_25 = (unsigned short)56397;
unsigned short var_26 = (unsigned short)11468;
unsigned long long int var_27 = 8451428800500267013ULL;
_Bool arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
unsigned long long int arr_3 [10] ;
_Bool arr_4 [10] [10] ;
short arr_5 [10] ;
int arr_2 [16] [16] ;
long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 11048443134689245556ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)17931;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -500489218;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 4146015220626151302LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
