#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58469;
unsigned int var_2 = 2659517994U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)35173;
signed char var_8 = (signed char)117;
short var_9 = (short)-7010;
short var_12 = (short)-19567;
unsigned char var_13 = (unsigned char)39;
int zero = 0;
signed char var_15 = (signed char)86;
int var_16 = -483991060;
unsigned int var_17 = 2421242193U;
unsigned short var_18 = (unsigned short)54659;
unsigned short var_19 = (unsigned short)11775;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3779404568U;
unsigned char var_22 = (unsigned char)210;
short var_23 = (short)25417;
_Bool var_24 = (_Bool)1;
int var_25 = -202001703;
unsigned int arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned int arr_4 [24] ;
signed char arr_12 [23] ;
unsigned short arr_13 [23] ;
int arr_17 [23] [23] ;
long long int arr_2 [14] ;
long long int arr_3 [14] ;
unsigned int arr_11 [24] [24] [24] ;
int arr_14 [23] [23] ;
int arr_22 [20] ;
unsigned short arr_23 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 794893078U : 1073336872U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 643097405U : 3061919829U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned short)15321;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = 1404123253;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 99105975186491877LL : -7487408153430796788LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 51934947297688222LL : -2103056982929532385LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 521199593U : 2319982457U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = -159956074;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -1602526128 : -494922852;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31921 : (unsigned short)28670;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
