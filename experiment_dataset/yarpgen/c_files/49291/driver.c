#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned short var_1 = (unsigned short)12627;
unsigned char var_2 = (unsigned char)124;
int var_3 = 840953847;
unsigned int var_6 = 1311435472U;
unsigned long long int var_8 = 10742927264020216936ULL;
long long int var_10 = 3528600999570796258LL;
int var_12 = -337478421;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 514217216634736664ULL;
int zero = 0;
long long int var_15 = 9190427528965473929LL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)199;
short var_18 = (short)29732;
signed char var_19 = (signed char)-61;
unsigned short var_20 = (unsigned short)34302;
long long int arr_0 [14] ;
_Bool arr_1 [14] ;
long long int arr_3 [14] ;
short arr_4 [14] [14] ;
short arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 6686145346213642146LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 7026076601458545844LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-18161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-23025;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
