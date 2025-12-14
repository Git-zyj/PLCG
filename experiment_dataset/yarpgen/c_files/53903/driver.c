#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3321955730U;
unsigned long long int var_2 = 8592144853158794119ULL;
int var_3 = 1851387039;
unsigned short var_5 = (unsigned short)40039;
int var_9 = 1252676162;
unsigned int var_10 = 1542523198U;
unsigned int var_11 = 1187443876U;
int zero = 0;
signed char var_12 = (signed char)-95;
short var_13 = (short)-16578;
unsigned short var_14 = (unsigned short)9304;
unsigned long long int var_15 = 10624084249652989896ULL;
unsigned short var_16 = (unsigned short)48423;
long long int var_17 = 1346667873760408843LL;
unsigned int var_18 = 3956465593U;
_Bool var_19 = (_Bool)0;
unsigned int arr_3 [24] [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
_Bool arr_5 [24] [24] [24] ;
unsigned short arr_8 [24] ;
signed char arr_11 [13] ;
signed char arr_15 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3256024953U : 218758013U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1973721553973226812ULL : 11628194300030464603ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)45074;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)113;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
