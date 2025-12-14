#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64648;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)6658;
signed char var_7 = (signed char)-52;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)46852;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)37745;
short var_20 = (short)28289;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1031758894U;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 538793999U;
unsigned short var_25 = (unsigned short)31816;
unsigned short var_26 = (unsigned short)20667;
unsigned int arr_0 [21] ;
unsigned long long int arr_3 [14] [14] ;
unsigned int arr_5 [14] [14] ;
_Bool arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1856482306U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 17582861599280632246ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 3868792121U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
