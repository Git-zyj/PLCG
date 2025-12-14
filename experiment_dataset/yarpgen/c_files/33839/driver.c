#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3398605677U;
signed char var_1 = (signed char)-47;
unsigned int var_2 = 1559033528U;
unsigned char var_4 = (unsigned char)148;
signed char var_5 = (signed char)53;
unsigned long long int var_6 = 16645718414865772506ULL;
short var_7 = (short)25888;
short var_9 = (short)31071;
unsigned long long int var_10 = 16791587002207797728ULL;
int zero = 0;
short var_11 = (short)12718;
unsigned char var_12 = (unsigned char)105;
short var_13 = (short)20976;
unsigned short var_14 = (unsigned short)61021;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)214;
short var_17 = (short)-29164;
unsigned short var_18 = (unsigned short)53699;
long long int var_19 = -1676721390057187565LL;
int var_20 = -2110837954;
int var_21 = -1301645881;
short var_22 = (short)5430;
short var_23 = (short)26896;
int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
long long int arr_5 [15] [15] ;
unsigned int arr_7 [15] [15] [15] ;
_Bool arr_9 [15] ;
short arr_10 [15] ;
unsigned long long int arr_14 [15] [15] ;
long long int arr_8 [15] [15] [15] ;
long long int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2115887686;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 15629713973707469867ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -7225656872929731668LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 84199099U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)-10158;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 16341203015224696002ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -3631610942179420922LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -661265539525868224LL : -7129009646816713814LL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
