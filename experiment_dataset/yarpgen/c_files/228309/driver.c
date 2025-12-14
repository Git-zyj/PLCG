#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)17552;
short var_3 = (short)-8764;
int var_6 = -1031825977;
unsigned char var_7 = (unsigned char)82;
unsigned char var_8 = (unsigned char)172;
unsigned char var_9 = (unsigned char)118;
signed char var_10 = (signed char)63;
_Bool var_11 = (_Bool)0;
long long int var_12 = 8994461970989319868LL;
long long int var_13 = 2377886649759711796LL;
int zero = 0;
unsigned int var_14 = 3503993941U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)33;
unsigned int var_17 = 2058485907U;
unsigned int var_18 = 4147281834U;
unsigned int var_19 = 579246499U;
_Bool var_20 = (_Bool)0;
unsigned int arr_3 [14] ;
short arr_8 [19] ;
unsigned char arr_9 [19] ;
short arr_16 [15] ;
int arr_17 [15] ;
long long int arr_18 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3568726849U : 2806117765U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-32153 : (short)-2755;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)20 : (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-4287 : (short)25628;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1614810514 : -702553346;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 5497642578748200026LL : 8126713103626956180LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
