#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4009227184U;
unsigned short var_3 = (unsigned short)28227;
unsigned int var_4 = 2111729746U;
int var_5 = 1330219979;
unsigned int var_6 = 691220452U;
long long int var_7 = -6039669055102404990LL;
int var_9 = 126663494;
unsigned int var_10 = 3961986454U;
unsigned short var_12 = (unsigned short)41744;
unsigned char var_13 = (unsigned char)6;
long long int var_14 = 3668884829246446154LL;
long long int var_15 = 3675598187048638755LL;
long long int var_17 = 2850703513244212668LL;
int zero = 0;
long long int var_18 = 2708551503954252396LL;
unsigned int var_19 = 3657829378U;
unsigned char var_20 = (unsigned char)67;
unsigned int var_21 = 3978354602U;
unsigned char var_22 = (unsigned char)163;
int var_23 = 550083211;
int arr_0 [20] ;
long long int arr_1 [20] ;
unsigned int arr_2 [20] [20] [20] ;
unsigned char arr_3 [20] [20] [20] ;
int arr_4 [20] ;
_Bool arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1330711486;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1962094390557253477LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1421022775U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -1907400714;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
