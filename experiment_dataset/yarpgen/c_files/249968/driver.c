#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6852190028410281260ULL;
short var_1 = (short)-25734;
signed char var_2 = (signed char)38;
unsigned int var_3 = 2521786348U;
_Bool var_5 = (_Bool)1;
int var_6 = 1145825696;
unsigned long long int var_8 = 11112912906147631120ULL;
short var_9 = (short)-5272;
int zero = 0;
long long int var_11 = 4841301825098879326LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)30579;
signed char var_17 = (signed char)64;
unsigned int var_18 = 1128266180U;
unsigned short arr_0 [12] ;
int arr_4 [12] [12] ;
int arr_11 [12] ;
unsigned short arr_7 [12] ;
unsigned short arr_14 [12] [12] [12] ;
int arr_15 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)60720;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -358739607;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -472501639;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)10643;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)3610;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1576285634;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
