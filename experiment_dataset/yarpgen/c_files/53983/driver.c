#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5938225386318596257ULL;
unsigned long long int var_4 = 16403932231668538001ULL;
unsigned long long int var_6 = 14649378748062735058ULL;
unsigned char var_7 = (unsigned char)157;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)109;
short var_13 = (short)17175;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_18 = (short)-14724;
_Bool var_19 = (_Bool)1;
short var_20 = (short)11997;
unsigned int var_21 = 685404004U;
signed char var_22 = (signed char)-103;
_Bool var_23 = (_Bool)0;
short var_24 = (short)7571;
unsigned char var_25 = (unsigned char)39;
signed char var_26 = (signed char)-44;
unsigned short arr_5 [12] ;
_Bool arr_10 [16] ;
short arr_11 [16] ;
_Bool arr_13 [22] ;
_Bool arr_19 [22] ;
unsigned long long int arr_12 [16] ;
short arr_16 [22] ;
short arr_23 [22] [22] ;
short arr_26 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)28790;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)-2220;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 17669844738380949162ULL : 1109031402857083679ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (short)-18335;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31653 : (short)-28664;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (short)-27653;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
