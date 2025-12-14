#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 125892451;
unsigned int var_3 = 1220167682U;
unsigned short var_5 = (unsigned short)36971;
unsigned short var_7 = (unsigned short)3762;
_Bool var_8 = (_Bool)1;
int var_9 = 407773487;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)7463;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)-29217;
signed char var_17 = (signed char)-91;
unsigned int var_18 = 537497926U;
short var_19 = (short)5941;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)37147;
unsigned long long int var_22 = 2262913473434579394ULL;
int arr_0 [11] ;
int arr_1 [11] ;
signed char arr_5 [21] ;
_Bool arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -55534900;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1256862025;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
