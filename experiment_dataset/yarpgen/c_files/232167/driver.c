#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1582284661;
long long int var_2 = -5143280748986512865LL;
long long int var_3 = -6723451083683923951LL;
int var_5 = 160599909;
short var_8 = (short)-21927;
_Bool var_10 = (_Bool)0;
int var_11 = 375193024;
unsigned long long int var_12 = 1381768711429327658ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1685980488U;
long long int var_16 = -4631436570745489985LL;
long long int var_17 = -3670670038123604317LL;
short var_18 = (short)-23526;
long long int var_19 = 5447396440558325579LL;
long long int var_20 = -5845354924618638875LL;
long long int var_21 = 3256771160857863456LL;
int var_22 = -256786309;
unsigned long long int var_23 = 15830542292820155371ULL;
long long int var_24 = -7174374057018400220LL;
unsigned int var_25 = 48337462U;
unsigned long long int arr_0 [12] ;
short arr_3 [12] ;
short arr_4 [12] [12] ;
unsigned int arr_5 [12] ;
int arr_6 [12] [12] [12] [12] ;
_Bool arr_7 [12] [12] ;
int arr_8 [17] ;
int arr_10 [17] [17] ;
unsigned long long int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 4661341846320933719ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)23548;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)5660;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 2704910614U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -2036750584;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 1014278621;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 637393906;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 10036668667210357776ULL;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
