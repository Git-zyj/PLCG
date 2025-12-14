#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54534;
unsigned int var_1 = 1354561786U;
signed char var_5 = (signed char)114;
signed char var_6 = (signed char)32;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)249;
signed char var_9 = (signed char)108;
signed char var_10 = (signed char)97;
int zero = 0;
unsigned short var_11 = (unsigned short)7344;
int var_12 = -1797659019;
unsigned short var_13 = (unsigned short)44600;
long long int var_14 = -353000011836418923LL;
long long int arr_0 [13] ;
unsigned long long int arr_2 [13] ;
_Bool arr_3 [13] ;
int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -2590386613153066227LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 6784816985327310254ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -775661981;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
