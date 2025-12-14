#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
unsigned long long int var_2 = 14235946160269752254ULL;
unsigned int var_4 = 2900010620U;
long long int var_5 = -7463310005555603093LL;
unsigned char var_7 = (unsigned char)255;
unsigned int var_8 = 3552925256U;
signed char var_9 = (signed char)21;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -848446702;
short var_15 = (short)-11312;
short var_16 = (short)18897;
int var_17 = -599384512;
long long int var_18 = -8362278854361505457LL;
unsigned long long int arr_6 [14] [14] ;
int arr_7 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 3659946915416670899ULL : 7972687008910049284ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -155160515 : 1162834897;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
