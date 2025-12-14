#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1770639676;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-14350;
long long int var_8 = -5458160089207880911LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-4167;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)-21859;
unsigned int var_18 = 971870187U;
short var_19 = (short)18273;
_Bool var_20 = (_Bool)0;
int var_21 = 731757668;
unsigned long long int var_22 = 14850184891852137255ULL;
int arr_1 [15] [15] ;
_Bool arr_6 [20] ;
unsigned int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1156947129;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1308796869U : 3124264032U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
