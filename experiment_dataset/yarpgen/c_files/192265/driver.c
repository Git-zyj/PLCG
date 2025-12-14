#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_5 = 3227153974U;
int var_6 = 640412875;
unsigned char var_11 = (unsigned char)110;
unsigned int var_12 = 3757250153U;
unsigned long long int var_14 = 10136217582308148613ULL;
int var_15 = -1143289163;
int zero = 0;
int var_17 = -1495085802;
unsigned long long int var_18 = 15760371371717311423ULL;
long long int var_19 = -8368855026838680249LL;
unsigned long long int var_20 = 16130094221766420486ULL;
short var_21 = (short)-11864;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-106;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
long long int arr_0 [19] ;
short arr_1 [19] ;
_Bool arr_2 [17] ;
_Bool arr_3 [17] [17] ;
_Bool arr_6 [20] ;
_Bool arr_7 [20] ;
unsigned long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 5302380138646057466LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)24751;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 16903409623900404392ULL;
}

void checksum() {
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
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
