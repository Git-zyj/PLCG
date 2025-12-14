#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4275223028U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)63;
unsigned char var_5 = (unsigned char)188;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)35;
unsigned int var_9 = 4187879438U;
int zero = 0;
unsigned char var_11 = (unsigned char)158;
unsigned char var_12 = (unsigned char)241;
unsigned char var_13 = (unsigned char)92;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)242;
int var_16 = -2085007544;
long long int var_17 = 5538945742774165860LL;
signed char var_18 = (signed char)-26;
short var_19 = (short)13964;
short var_20 = (short)31775;
_Bool arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned char arr_5 [25] ;
signed char arr_6 [25] ;
_Bool arr_7 [25] ;
_Bool arr_4 [19] ;
_Bool arr_8 [25] ;
unsigned long long int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 2382599668113567225ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
