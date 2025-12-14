#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3104744639U;
unsigned long long int var_3 = 14619422586097005048ULL;
int var_4 = -390238500;
unsigned long long int var_7 = 2931875324403274294ULL;
unsigned int var_9 = 3557866040U;
int zero = 0;
long long int var_10 = -6016023132923711497LL;
signed char var_11 = (signed char)90;
unsigned int var_12 = 3369075827U;
short var_13 = (short)11368;
long long int var_14 = -5227210207847438040LL;
short var_15 = (short)28703;
unsigned char var_16 = (unsigned char)33;
unsigned char var_17 = (unsigned char)59;
short arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
unsigned int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
int arr_4 [24] ;
unsigned int arr_5 [24] [24] ;
short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-32177;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15929702736628733386ULL : 688407206966189711ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2186088772U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 608271766229446009ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 213775314;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 3785979265U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)32153;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
