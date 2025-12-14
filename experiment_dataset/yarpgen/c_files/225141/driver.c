#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14163438863815893301ULL;
unsigned long long int var_7 = 4664311838131103419ULL;
int var_10 = -990010503;
unsigned int var_11 = 116765443U;
unsigned short var_12 = (unsigned short)28857;
unsigned short var_13 = (unsigned short)22800;
int zero = 0;
int var_14 = 815821781;
unsigned short var_15 = (unsigned short)6443;
unsigned short var_16 = (unsigned short)38638;
unsigned int var_17 = 1557716237U;
unsigned int var_18 = 2023489682U;
unsigned long long int var_19 = 5593443954298236877ULL;
long long int var_20 = -1928781593480571300LL;
unsigned short var_21 = (unsigned short)10192;
unsigned short arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
unsigned int arr_3 [19] ;
short arr_4 [19] ;
_Bool arr_5 [18] [18] ;
short arr_6 [18] ;
unsigned int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)15826;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 360607188U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)16359;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)19754;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4205624405U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
