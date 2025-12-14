#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 808274770U;
unsigned long long int var_1 = 17174972936920744957ULL;
long long int var_2 = 2280890875407374965LL;
short var_8 = (short)11534;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)62660;
long long int var_14 = 3704258428335672805LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)119;
signed char var_21 = (signed char)67;
signed char var_22 = (signed char)53;
int var_23 = -555791118;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_0 [21] ;
_Bool arr_2 [21] [21] ;
signed char arr_4 [21] ;
int arr_9 [16] ;
short arr_6 [21] [21] ;
_Bool arr_7 [21] [21] ;
signed char arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 11224797244684473163ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)17 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -1593003792;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5128 : (short)6462;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (signed char)77;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
