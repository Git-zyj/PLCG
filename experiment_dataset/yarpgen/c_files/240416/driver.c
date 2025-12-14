#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
signed char var_1 = (signed char)-81;
unsigned int var_2 = 3019095144U;
unsigned int var_3 = 133801599U;
_Bool var_4 = (_Bool)0;
long long int var_6 = -5832345952702014725LL;
long long int var_7 = -7972508308336464301LL;
unsigned char var_8 = (unsigned char)133;
unsigned int var_9 = 2623296875U;
unsigned int var_10 = 708841164U;
unsigned int var_11 = 1993303432U;
unsigned int var_12 = 3865830625U;
int zero = 0;
unsigned char var_13 = (unsigned char)143;
unsigned short var_14 = (unsigned short)23343;
short var_15 = (short)-22812;
signed char var_16 = (signed char)53;
short var_17 = (short)-106;
unsigned short var_18 = (unsigned short)50968;
unsigned int arr_1 [14] ;
short arr_2 [14] ;
unsigned short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3911226138U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)4500;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)3514;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
