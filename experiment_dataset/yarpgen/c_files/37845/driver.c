#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)49348;
int var_3 = -834382285;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 1760680625U;
unsigned long long int var_12 = 5905596132746522802ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -3426225779967690308LL;
unsigned long long int var_15 = 3933792051903601275ULL;
unsigned char var_16 = (unsigned char)172;
signed char var_17 = (signed char)-119;
signed char var_18 = (signed char)-52;
signed char var_19 = (signed char)-26;
short var_20 = (short)-1414;
int var_21 = -1285949096;
long long int var_22 = 5403275296131866749LL;
unsigned long long int arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
unsigned int arr_4 [10] ;
long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 8512373661405888585ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 922590978;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)64137;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1362014868U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 8509833860287206381LL : -1859331801322663259LL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
