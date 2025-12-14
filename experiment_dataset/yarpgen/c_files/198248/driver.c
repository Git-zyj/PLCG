#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3409448424U;
int var_4 = -48184008;
unsigned char var_5 = (unsigned char)254;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2178011720U;
unsigned char var_8 = (unsigned char)65;
unsigned long long int var_11 = 5735341832836603824ULL;
unsigned char var_12 = (unsigned char)18;
int var_13 = 2139326860;
int zero = 0;
unsigned char var_14 = (unsigned char)71;
long long int var_15 = 6531980376001049609LL;
unsigned char var_16 = (unsigned char)75;
unsigned int var_17 = 3584893002U;
unsigned char var_18 = (unsigned char)210;
_Bool var_19 = (_Bool)1;
long long int arr_0 [21] ;
short arr_1 [21] ;
int arr_2 [21] ;
unsigned short arr_4 [21] ;
_Bool arr_5 [21] ;
_Bool arr_6 [21] [21] [21] ;
long long int arr_9 [17] ;
unsigned char arr_7 [21] ;
long long int arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -7597992139437238891LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-18904;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 940413605;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15720 : (unsigned short)14201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = -7304413197013589628LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)78 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 1519278067180497932LL : 3096334937809575293LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
