#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)28;
unsigned short var_6 = (unsigned short)19114;
short var_8 = (short)8919;
unsigned char var_9 = (unsigned char)105;
unsigned int var_10 = 3239052195U;
short var_11 = (short)14161;
int zero = 0;
unsigned char var_14 = (unsigned char)246;
signed char var_15 = (signed char)123;
short var_16 = (short)-27450;
short var_17 = (short)23759;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 721181265U;
long long int var_20 = -5123350317552402064LL;
unsigned int var_21 = 1524356489U;
long long int var_22 = 9206198226969653674LL;
unsigned short arr_0 [20] ;
long long int arr_1 [20] ;
unsigned char arr_3 [20] [20] ;
_Bool arr_5 [20] [20] ;
signed char arr_6 [24] [24] ;
unsigned char arr_7 [24] [24] ;
_Bool arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)23616;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -7345389363928609087LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
