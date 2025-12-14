#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1258683276U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)188;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)63;
int zero = 0;
unsigned long long int var_14 = 5245116610671868324ULL;
unsigned long long int var_15 = 18132208358580176637ULL;
unsigned short var_16 = (unsigned short)27549;
unsigned int var_17 = 2481622211U;
unsigned int var_18 = 4180572934U;
unsigned long long int var_19 = 12498347078446800425ULL;
unsigned long long int arr_1 [13] [13] ;
unsigned int arr_3 [13] ;
unsigned int arr_4 [13] [13] ;
unsigned short arr_8 [21] [21] ;
unsigned long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3640847027815570473ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2433556846U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 968406897U : 1884493727U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)60489;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 10161011048196160079ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
