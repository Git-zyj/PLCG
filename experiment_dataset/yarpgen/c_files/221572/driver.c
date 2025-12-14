#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 15371678636602633754ULL;
signed char var_2 = (signed char)48;
unsigned long long int var_3 = 6525181904718542058ULL;
short var_5 = (short)-3849;
short var_6 = (short)20235;
int var_7 = -1905844547;
unsigned short var_8 = (unsigned short)9169;
long long int var_10 = -7888789787399080709LL;
unsigned char var_12 = (unsigned char)45;
short var_13 = (short)-24132;
unsigned short var_14 = (unsigned short)58776;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)55;
unsigned char var_18 = (unsigned char)148;
unsigned long long int var_19 = 4073933727098854156ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)4167;
unsigned long long int var_21 = 5193655992253323732ULL;
unsigned int var_22 = 1392470319U;
signed char var_23 = (signed char)-5;
unsigned short var_24 = (unsigned short)61298;
_Bool arr_4 [18] [18] [18] ;
int arr_8 [24] ;
long long int arr_6 [18] ;
unsigned short arr_9 [24] ;
unsigned int arr_10 [24] ;
short arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -762131506;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 512232668272243355LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)29984;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 3022679486U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)19719;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
