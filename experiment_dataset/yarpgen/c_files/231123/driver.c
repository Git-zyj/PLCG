#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22852;
short var_1 = (short)24558;
unsigned int var_5 = 1692361726U;
signed char var_10 = (signed char)27;
signed char var_17 = (signed char)-68;
unsigned char var_19 = (unsigned char)57;
int zero = 0;
signed char var_20 = (signed char)56;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-3513;
unsigned short var_23 = (unsigned short)16925;
signed char var_24 = (signed char)125;
unsigned int var_25 = 833814205U;
unsigned int var_26 = 841968307U;
unsigned short var_27 = (unsigned short)16978;
long long int arr_1 [15] ;
short arr_2 [15] [15] ;
long long int arr_4 [24] ;
long long int arr_5 [24] ;
signed char arr_3 [15] [15] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -6330209859190255693LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)21361;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 4680478954971820657LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -8898637099206699487LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)79;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
