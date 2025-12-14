#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
short var_2 = (short)-25815;
short var_4 = (short)-4413;
signed char var_5 = (signed char)-116;
long long int var_8 = 4979937827088026631LL;
unsigned long long int var_10 = 5648757075904348097ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7146566603638674870LL;
unsigned long long int var_16 = 17728918692771014531ULL;
unsigned char var_17 = (unsigned char)219;
_Bool arr_3 [18] ;
long long int arr_5 [18] [18] ;
short arr_10 [18] ;
unsigned int arr_11 [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
unsigned long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -2475480873362575046LL : -8156654975116007455LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)-22253;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 1291198244U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1227426077248912206ULL : 1334882688321257744ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 16404374075237469971ULL : 88197510515137324ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
