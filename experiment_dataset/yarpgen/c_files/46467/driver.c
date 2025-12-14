#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2111;
long long int var_1 = -4827829438820079801LL;
long long int var_4 = 6966909232163675838LL;
unsigned char var_5 = (unsigned char)161;
short var_6 = (short)-25638;
signed char var_7 = (signed char)-99;
short var_8 = (short)28032;
_Bool var_9 = (_Bool)0;
int var_10 = 459499817;
unsigned char var_11 = (unsigned char)221;
int zero = 0;
unsigned int var_12 = 1541469810U;
short var_13 = (short)-5911;
signed char var_14 = (signed char)10;
unsigned char var_15 = (unsigned char)80;
unsigned short var_16 = (unsigned short)36293;
short var_17 = (short)2500;
unsigned long long int var_18 = 4997122427615013800ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 719554563U;
_Bool arr_1 [15] ;
_Bool arr_4 [23] [23] ;
int arr_5 [23] ;
_Bool arr_3 [15] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 389152844;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)43852;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
