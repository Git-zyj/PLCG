#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8971;
unsigned char var_8 = (unsigned char)207;
unsigned int var_10 = 3685908396U;
int var_14 = -1853031935;
unsigned int var_16 = 2196941052U;
long long int var_17 = -6566851070329769979LL;
int zero = 0;
signed char var_18 = (signed char)27;
_Bool var_19 = (_Bool)1;
int var_20 = -195267410;
unsigned int var_21 = 2098717040U;
unsigned int var_22 = 164989925U;
int var_23 = 1357748640;
short var_24 = (short)12575;
unsigned int var_25 = 4270556551U;
unsigned int var_26 = 518249065U;
int arr_0 [13] ;
signed char arr_1 [13] ;
_Bool arr_2 [13] ;
unsigned short arr_3 [13] [13] [13] ;
signed char arr_4 [13] ;
short arr_5 [13] [13] ;
long long int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -572378359;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)57037;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)106 : (signed char)76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-22413;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 908836838428400124LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
