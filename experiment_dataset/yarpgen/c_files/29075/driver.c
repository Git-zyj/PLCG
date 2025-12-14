#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -128702952;
long long int var_4 = -8147967643577745072LL;
short var_6 = (short)5996;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_15 = (short)-20893;
_Bool var_16 = (_Bool)1;
int var_17 = 1583930237;
unsigned char var_18 = (unsigned char)162;
long long int var_19 = 2428907442187596964LL;
short var_20 = (short)21110;
int var_21 = -1882174477;
long long int var_22 = 5244359411041031706LL;
short arr_0 [15] ;
int arr_1 [15] [15] ;
unsigned int arr_3 [15] ;
_Bool arr_4 [15] [15] ;
long long int arr_7 [12] ;
unsigned short arr_10 [12] [12] ;
signed char arr_11 [12] ;
unsigned int arr_13 [12] [12] [12] ;
int arr_17 [12] [12] [12] [12] [12] ;
unsigned short arr_19 [17] ;
long long int arr_20 [17] ;
unsigned long long int arr_18 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-12723;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -198122020;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3980387885U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 8071857909948127191LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)54031;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 4242500655U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = -741103798;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (unsigned short)20343;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 8158880309364601884LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1038233451921510588ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
