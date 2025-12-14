#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16334363792707534862ULL;
unsigned short var_3 = (unsigned short)13063;
int var_4 = -740624374;
unsigned short var_6 = (unsigned short)12781;
long long int var_8 = -2792207986037159700LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)42914;
signed char var_12 = (signed char)92;
signed char var_13 = (signed char)124;
unsigned int var_14 = 3966249904U;
unsigned long long int var_15 = 17035413382293112423ULL;
long long int var_16 = -4839651242746272306LL;
long long int var_17 = -3783508102803047334LL;
int var_18 = -406999594;
unsigned int arr_0 [25] [25] ;
short arr_1 [25] ;
_Bool arr_2 [25] ;
unsigned int arr_4 [18] ;
short arr_5 [18] ;
long long int arr_7 [10] ;
long long int arr_8 [10] [10] ;
unsigned int arr_9 [10] ;
long long int arr_14 [17] ;
unsigned short arr_18 [16] [16] [16] ;
_Bool arr_22 [16] ;
int arr_3 [25] ;
_Bool arr_6 [18] [18] ;
short arr_10 [10] ;
long long int arr_15 [17] ;
unsigned short arr_20 [16] ;
long long int arr_24 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 4217833492U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-21510;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4075803039U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-14404;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -5110639516991916163LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 1105558023076407960LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 2967368470U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 7354948671903857484LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)9036;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 628780661;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)-20823;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = -5729768378462162790LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60587 : (unsigned short)16661;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -4487989116549813324LL : -3514808645383674780LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
