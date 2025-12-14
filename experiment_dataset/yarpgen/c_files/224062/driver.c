#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-66;
signed char var_4 = (signed char)-118;
unsigned long long int var_5 = 17096047277661556121ULL;
unsigned int var_8 = 3965387536U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2853142401U;
long long int var_15 = -2369982469930978399LL;
long long int var_16 = 5490004232053967626LL;
signed char var_17 = (signed char)-79;
int var_18 = -1981637621;
unsigned long long int var_19 = 3638117767352257387ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)171;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)3;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 3441168787U;
signed char arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned short arr_4 [12] ;
_Bool arr_5 [12] ;
unsigned char arr_6 [12] [12] ;
unsigned int arr_7 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 4513800962682810550ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)60908;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 636118235U : 322706922U;
}

void checksum() {
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
