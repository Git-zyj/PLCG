#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28453;
unsigned int var_6 = 780368424U;
signed char var_7 = (signed char)-84;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3753807043740469032LL;
unsigned long long int var_10 = 12620949443831525692ULL;
unsigned int var_11 = 2294793934U;
int zero = 0;
unsigned int var_12 = 2758965549U;
unsigned char var_13 = (unsigned char)178;
unsigned int var_14 = 1506246576U;
unsigned short var_15 = (unsigned short)11988;
unsigned int var_16 = 336759072U;
short arr_0 [10] [10] ;
short arr_1 [10] ;
_Bool arr_13 [18] ;
unsigned int arr_11 [10] ;
unsigned int arr_15 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-57;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-10430;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 3533646655U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 1002617959U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
