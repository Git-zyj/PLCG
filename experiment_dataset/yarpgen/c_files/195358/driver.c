#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
int var_7 = -1128931040;
unsigned char var_10 = (unsigned char)156;
unsigned int var_12 = 4256778181U;
int zero = 0;
short var_15 = (short)-8097;
unsigned short var_16 = (unsigned short)11220;
unsigned short var_17 = (unsigned short)26102;
short var_18 = (short)15253;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)38317;
short var_21 = (short)-26660;
unsigned short var_22 = (unsigned short)7884;
unsigned char var_23 = (unsigned char)46;
_Bool var_24 = (_Bool)0;
unsigned int arr_6 [19] ;
unsigned int arr_8 [19] [19] ;
signed char arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3324269382U : 1934684472U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2907083679U : 999290551U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)18472;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
