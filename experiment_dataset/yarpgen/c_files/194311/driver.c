#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)28237;
short var_7 = (short)32503;
unsigned int var_8 = 4229583055U;
long long int var_9 = 8063359560247558641LL;
signed char var_10 = (signed char)45;
short var_12 = (short)-7029;
unsigned int var_13 = 2330069102U;
unsigned short var_16 = (unsigned short)65340;
long long int var_17 = 2220688387232164013LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-7300;
unsigned int var_21 = 376420455U;
short var_22 = (short)5019;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)24328;
long long int var_25 = 8005138465361267126LL;
unsigned int var_26 = 2504223934U;
short var_27 = (short)-2108;
unsigned int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
long long int arr_5 [18] [18] ;
long long int arr_6 [18] ;
long long int arr_3 [23] ;
long long int arr_4 [23] [23] ;
long long int arr_7 [18] ;
signed char arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 744580987U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)38385;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 6950823731822056773LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 3420630481288882969LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -5057802140143124360LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -1544884596871476796LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2901808930557872508LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-18;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
