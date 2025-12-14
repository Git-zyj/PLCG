#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3639570403U;
long long int var_2 = -8255190281123806208LL;
unsigned int var_3 = 251203141U;
unsigned int var_4 = 3422919096U;
unsigned int var_5 = 2632720711U;
unsigned int var_6 = 3590661338U;
unsigned int var_8 = 13566718U;
unsigned int var_9 = 4118660340U;
unsigned int var_10 = 2079851403U;
long long int var_12 = -2116596587800386828LL;
unsigned int var_13 = 2480308610U;
long long int var_14 = -5297039310434272881LL;
unsigned int var_15 = 2300258906U;
short var_16 = (short)30329;
unsigned int var_17 = 1419728177U;
int zero = 0;
unsigned int var_18 = 2891683703U;
long long int var_19 = -8217153436560594193LL;
unsigned int var_20 = 2820375044U;
long long int var_21 = 4490002935492487089LL;
unsigned int var_22 = 3260931990U;
short var_23 = (short)23843;
long long int var_24 = -8859325786748809884LL;
unsigned int var_25 = 3688575423U;
unsigned int var_26 = 436230434U;
unsigned int var_27 = 1386759851U;
short var_28 = (short)20558;
unsigned int var_29 = 2736780395U;
short arr_0 [11] ;
short arr_1 [11] ;
unsigned int arr_4 [11] [11] ;
short arr_8 [11] ;
unsigned int arr_2 [11] [11] ;
unsigned int arr_3 [11] ;
short arr_6 [11] [11] ;
long long int arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-13082;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-7190;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 2611459015U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (short)8343;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 326594166U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 942339903U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-13562 : (short)26509;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = -8754793670450136287LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
