#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1703520526;
unsigned char var_3 = (unsigned char)91;
unsigned short var_7 = (unsigned short)6614;
unsigned int var_9 = 1863226394U;
unsigned short var_10 = (unsigned short)60124;
signed char var_13 = (signed char)-33;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3960267444U;
signed char var_16 = (signed char)-84;
short var_17 = (short)30890;
signed char var_18 = (signed char)45;
signed char var_19 = (signed char)37;
unsigned int var_20 = 1033949270U;
unsigned long long int var_21 = 13966918243993642322ULL;
unsigned int var_22 = 2966604536U;
unsigned short arr_1 [12] ;
unsigned int arr_2 [12] [12] ;
unsigned int arr_3 [12] [12] [12] ;
short arr_4 [12] ;
unsigned int arr_5 [12] [12] [12] [12] ;
signed char arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)60324;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 462672749U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3987496259U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)29450;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3107103185U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)46;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
