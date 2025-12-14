#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -597188087;
signed char var_3 = (signed char)121;
unsigned int var_6 = 3107363412U;
int var_9 = -438094512;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)31324;
int var_12 = 751772255;
unsigned char var_13 = (unsigned char)131;
long long int var_15 = 1307973170510636261LL;
short var_16 = (short)-6249;
int zero = 0;
long long int var_19 = 3260252038241745882LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 8979010637623501270ULL;
long long int var_22 = 475985494321752958LL;
unsigned long long int var_23 = 5794903605679351776ULL;
_Bool var_24 = (_Bool)0;
unsigned char arr_4 [20] ;
unsigned short arr_6 [20] [20] [20] ;
unsigned char arr_8 [20] ;
unsigned short arr_12 [20] [20] [20] ;
_Bool arr_13 [20] [20] ;
unsigned char arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)6122 : (unsigned short)56105;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)14646;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)152 : (unsigned char)164;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
