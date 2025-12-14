#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26583;
unsigned short var_3 = (unsigned short)45468;
unsigned short var_4 = (unsigned short)1362;
signed char var_5 = (signed char)117;
int var_8 = 756525702;
signed char var_10 = (signed char)0;
int zero = 0;
short var_11 = (short)23937;
unsigned char var_12 = (unsigned char)97;
short var_13 = (short)32494;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)16;
long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_5 [19] [19] ;
short arr_3 [19] ;
signed char arr_4 [19] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 8411491277359708033LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 428725997141257610ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 4308935203672086059ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)5893;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)98;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
