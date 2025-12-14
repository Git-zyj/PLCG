#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12680;
signed char var_1 = (signed char)118;
short var_2 = (short)-26583;
signed char var_3 = (signed char)12;
signed char var_5 = (signed char)-61;
unsigned long long int var_6 = 6317779758091768248ULL;
signed char var_7 = (signed char)17;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)59;
int var_12 = 1707377844;
int zero = 0;
unsigned short var_13 = (unsigned short)6714;
unsigned long long int var_14 = 6893893514858811535ULL;
unsigned short var_15 = (unsigned short)34824;
short var_16 = (short)-24486;
unsigned int var_17 = 2796535831U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3918680758U;
unsigned int arr_0 [11] ;
short arr_2 [11] [11] ;
unsigned long long int arr_4 [11] ;
long long int arr_5 [11] ;
short arr_6 [11] [11] ;
_Bool arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2702698804U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-31842;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 8700429560777419871ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 7503603945411467790LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-32391;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
