#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 673097512071329711LL;
short var_2 = (short)-7773;
unsigned int var_7 = 2261811298U;
unsigned short var_10 = (unsigned short)38045;
long long int var_13 = 5284133316841736851LL;
unsigned int var_14 = 1094542612U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 8449950330266619157ULL;
int var_21 = -1960193771;
long long int var_22 = -6488004699073921358LL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)46695;
unsigned char var_25 = (unsigned char)164;
unsigned short var_26 = (unsigned short)13485;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-6841;
unsigned short var_29 = (unsigned short)9547;
_Bool arr_0 [12] ;
unsigned long long int arr_1 [12] ;
_Bool arr_15 [19] ;
_Bool arr_18 [19] [19] [19] [19] ;
_Bool arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 12635392398813788385ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
