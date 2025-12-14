#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
unsigned char var_8 = (unsigned char)88;
_Bool var_12 = (_Bool)0;
unsigned int var_17 = 4076279009U;
long long int var_18 = 993978739765769664LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)243;
signed char var_21 = (signed char)41;
unsigned int var_22 = 3362099437U;
int var_23 = -1779384759;
unsigned long long int var_24 = 6383310967057576558ULL;
unsigned int arr_1 [24] ;
long long int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
short arr_8 [15] ;
unsigned char arr_9 [15] ;
unsigned int arr_6 [24] ;
unsigned int arr_7 [24] [24] [24] ;
unsigned int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4292843592U : 3267477149U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 3090844215319822729LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5649168215242767499ULL : 7143610445969608316ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (short)18464;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1088387053U : 3744103345U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2134392517U : 4691491U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2061566909U : 3502188140U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
