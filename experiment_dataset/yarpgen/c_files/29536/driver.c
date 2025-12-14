#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45798;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3562495050U;
unsigned int var_4 = 3449461996U;
unsigned short var_7 = (unsigned short)64279;
signed char var_8 = (signed char)116;
unsigned char var_9 = (unsigned char)224;
_Bool var_10 = (_Bool)0;
int var_12 = -970685431;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 7765704057864914641ULL;
unsigned int var_16 = 1010950075U;
int zero = 0;
signed char var_17 = (signed char)-12;
unsigned long long int var_18 = 15701766043643240546ULL;
unsigned long long int var_19 = 8357354529134749822ULL;
unsigned char var_20 = (unsigned char)188;
short var_21 = (short)12270;
int var_22 = 747818403;
int arr_1 [19] ;
int arr_2 [19] ;
_Bool arr_3 [19] [19] ;
short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1775059444;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1392305084;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)17793;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
