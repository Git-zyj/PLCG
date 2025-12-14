#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43135;
unsigned char var_1 = (unsigned char)239;
unsigned long long int var_2 = 12681217864020071086ULL;
unsigned char var_3 = (unsigned char)128;
unsigned char var_4 = (unsigned char)206;
long long int var_5 = 4472849536946410776LL;
unsigned int var_6 = 2226770161U;
unsigned int var_7 = 574245738U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)221;
unsigned long long int var_10 = 15170567846507790177ULL;
signed char var_11 = (signed char)67;
long long int var_12 = -2146209917651823055LL;
unsigned int var_13 = 1749833318U;
unsigned long long int var_14 = 283277671126209745ULL;
int zero = 0;
unsigned long long int var_15 = 9213490049907361037ULL;
unsigned int var_16 = 2439156127U;
signed char var_17 = (signed char)125;
int var_18 = 1256207372;
unsigned int var_19 = 2572288245U;
unsigned long long int var_20 = 12336654133806688331ULL;
unsigned char var_21 = (unsigned char)44;
unsigned int var_22 = 475906638U;
unsigned char var_23 = (unsigned char)13;
unsigned char var_24 = (unsigned char)68;
unsigned char var_25 = (unsigned char)191;
unsigned int var_26 = 1315148737U;
unsigned char var_27 = (unsigned char)100;
unsigned long long int arr_3 [16] [16] ;
long long int arr_4 [16] ;
_Bool arr_5 [16] ;
long long int arr_16 [25] ;
unsigned short arr_17 [25] ;
unsigned char arr_36 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 13421483568823500799ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -5622699199694477626LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = -406243656088375980LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (unsigned short)24389;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)49 : (unsigned char)24;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
