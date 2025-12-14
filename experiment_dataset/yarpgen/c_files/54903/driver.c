#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)246;
short var_5 = (short)24154;
long long int var_6 = -1150298247644156383LL;
short var_8 = (short)11282;
unsigned char var_10 = (unsigned char)5;
unsigned long long int var_12 = 14648184234637844896ULL;
unsigned char var_14 = (unsigned char)82;
unsigned long long int var_15 = 2469658340335825202ULL;
int zero = 0;
unsigned int var_16 = 2197152582U;
unsigned char var_17 = (unsigned char)6;
unsigned char var_18 = (unsigned char)94;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -663341949504861113LL;
_Bool arr_0 [23] ;
int arr_4 [21] ;
_Bool arr_6 [21] [21] ;
short arr_7 [20] ;
signed char arr_2 [23] ;
unsigned short arr_3 [23] ;
int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1203929725;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)3699;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)4985;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1392312838;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
