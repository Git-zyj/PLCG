#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1578584581U;
long long int var_1 = -3914862077419729463LL;
short var_2 = (short)9664;
unsigned short var_3 = (unsigned short)33476;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-24;
signed char var_10 = (signed char)-47;
int var_11 = -1957354067;
unsigned char var_12 = (unsigned char)21;
unsigned int var_13 = 948473840U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3439323483U;
unsigned short var_16 = (unsigned short)20360;
unsigned short var_17 = (unsigned short)3728;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)104;
_Bool var_20 = (_Bool)1;
short arr_4 [14] ;
short arr_2 [22] [22] ;
int arr_3 [22] [22] ;
unsigned short arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)24818;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)20841;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -1269278588;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)6946;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
