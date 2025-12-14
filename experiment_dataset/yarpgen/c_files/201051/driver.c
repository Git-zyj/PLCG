#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned long long int var_1 = 5836174177859712187ULL;
signed char var_2 = (signed char)-14;
unsigned char var_5 = (unsigned char)67;
unsigned long long int var_6 = 2972924208513782567ULL;
signed char var_11 = (signed char)13;
unsigned long long int var_13 = 6494470887048723424ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)16731;
unsigned int var_18 = 384210279U;
short var_19 = (short)-10358;
unsigned char var_20 = (unsigned char)240;
signed char var_21 = (signed char)125;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)243;
unsigned int var_24 = 1231874008U;
unsigned int var_25 = 2846408587U;
long long int arr_0 [22] [22] ;
int arr_1 [22] ;
long long int arr_3 [21] ;
long long int arr_10 [18] ;
unsigned char arr_2 [22] [22] ;
unsigned long long int arr_8 [18] ;
unsigned long long int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -8293925257523366697LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1568268320;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -5214741868475668146LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 1292600679631766464LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 10770495285961010255ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 7505270399076854993ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
