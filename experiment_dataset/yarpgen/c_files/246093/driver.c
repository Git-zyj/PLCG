#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6522948294588805215LL;
long long int var_9 = -8108817493328674283LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)89;
long long int var_14 = 3567780434765297084LL;
short var_15 = (short)14185;
unsigned long long int var_16 = 5383390866907839858ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 5146870668304133303LL;
unsigned short var_20 = (unsigned short)19426;
signed char var_21 = (signed char)95;
int var_22 = -1458997835;
unsigned short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_4 [23] ;
unsigned short arr_5 [23] [23] [23] ;
int arr_6 [23] ;
short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)64476;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)16430;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)54253;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)44710;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)31583;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1545689226;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)28929;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
