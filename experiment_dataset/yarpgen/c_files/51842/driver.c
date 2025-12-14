#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1682649277U;
short var_5 = (short)5794;
unsigned short var_6 = (unsigned short)30172;
unsigned char var_7 = (unsigned char)81;
long long int var_8 = 460737177417870950LL;
unsigned char var_9 = (unsigned char)92;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = -2077232291;
long long int var_15 = -7915251647380772658LL;
long long int var_16 = -2683002784636770444LL;
int zero = 0;
short var_18 = (short)2147;
unsigned int var_19 = 2435945619U;
signed char var_20 = (signed char)46;
short var_21 = (short)1230;
long long int var_22 = 1694621092453784589LL;
unsigned short var_23 = (unsigned short)20717;
unsigned int var_24 = 2887564278U;
unsigned short var_25 = (unsigned short)17781;
short var_26 = (short)22452;
int var_27 = -734311348;
short arr_3 [12] [12] ;
_Bool arr_7 [21] ;
unsigned int arr_9 [21] [21] ;
signed char arr_16 [21] [21] [21] ;
unsigned int arr_4 [12] ;
unsigned short arr_14 [21] [21] [21] ;
unsigned short arr_17 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-15434;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 3335219086U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1300923879U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)27154 : (unsigned short)59915;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)29655;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
