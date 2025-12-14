#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22911;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 13761673039311202389ULL;
unsigned int var_5 = 270755567U;
int var_6 = 2117424904;
signed char var_7 = (signed char)-105;
unsigned long long int var_12 = 4012483249031515635ULL;
signed char var_13 = (signed char)69;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4463100832672529255LL;
unsigned long long int var_18 = 11747105097564869793ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6207519875271686528LL;
short var_21 = (short)2947;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)42049;
short arr_8 [12] [12] ;
short arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-21293 : (short)-7708;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (short)-32425;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
