#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)18;
int var_4 = 1085871121;
int var_6 = 1827393516;
int var_8 = -1019839484;
int var_9 = -1942470279;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
signed char var_13 = (signed char)69;
unsigned char var_14 = (unsigned char)152;
unsigned char var_15 = (unsigned char)37;
unsigned short var_16 = (unsigned short)58249;
unsigned int var_17 = 3023937957U;
unsigned int var_18 = 2003512983U;
unsigned long long int var_19 = 3156219650918045015ULL;
unsigned int var_20 = 3767231567U;
signed char arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
_Bool arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
