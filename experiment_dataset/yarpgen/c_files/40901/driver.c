#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -2396959496209254323LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_4 = -1282730132;
unsigned long long int var_5 = 17239178210492284565ULL;
unsigned long long int var_6 = 5927210636711727144ULL;
unsigned int var_7 = 3496211789U;
unsigned long long int var_8 = 4745017539937794501ULL;
signed char var_9 = (signed char)-107;
unsigned int var_10 = 2166574621U;
short var_11 = (short)20205;
int zero = 0;
unsigned short var_12 = (unsigned short)25369;
long long int var_13 = 2409282217646310345LL;
long long int var_14 = 231875361294049609LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-7280;
unsigned short var_17 = (unsigned short)14931;
unsigned long long int var_18 = 5999794069962239247ULL;
unsigned char var_19 = (unsigned char)244;
unsigned long long int var_20 = 3807920285404244496ULL;
unsigned char var_21 = (unsigned char)23;
int var_22 = 1345989388;
unsigned int var_23 = 3643405185U;
_Bool var_24 = (_Bool)0;
long long int var_25 = -4324482720115465145LL;
unsigned int var_26 = 2123523325U;
_Bool arr_0 [20] [20] ;
long long int arr_2 [20] ;
int arr_5 [20] [20] [20] ;
short arr_9 [18] ;
long long int arr_10 [24] ;
_Bool arr_13 [24] ;
_Bool arr_14 [24] [24] [24] ;
unsigned int arr_16 [24] [24] [24] ;
unsigned short arr_17 [24] [24] [24] ;
signed char arr_26 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 8209969742304298855LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2136595371 : -1289289041;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (short)-10351;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 9091169861382531965LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 248070949U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)56991;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (signed char)13;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
