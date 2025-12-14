#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1478626739U;
unsigned long long int var_3 = 1901707652700009736ULL;
long long int var_7 = -727434785062160301LL;
short var_8 = (short)26854;
short var_9 = (short)999;
long long int var_12 = 675882751102395149LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)0;
short var_16 = (short)29906;
unsigned short var_17 = (unsigned short)26857;
int var_18 = 82226712;
_Bool var_19 = (_Bool)0;
long long int var_20 = 5708897095977656295LL;
_Bool var_21 = (_Bool)1;
int arr_2 [20] [20] ;
unsigned short arr_3 [24] ;
long long int arr_5 [24] [24] ;
_Bool arr_6 [24] ;
unsigned short arr_8 [17] ;
_Bool arr_7 [24] ;
unsigned char arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 797483664;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)20549;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -6452426054282089669LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)35190;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)83;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
