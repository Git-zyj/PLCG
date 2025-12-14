#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-75;
short var_3 = (short)8771;
unsigned short var_4 = (unsigned short)18478;
long long int var_5 = -9050122932747677152LL;
unsigned short var_6 = (unsigned short)56451;
long long int var_7 = -3761462662062958980LL;
_Bool var_8 = (_Bool)1;
int var_9 = 1939299511;
unsigned short var_11 = (unsigned short)16701;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1044986486;
int var_14 = -1877172734;
long long int var_15 = -499873056413437428LL;
unsigned int var_16 = 3221680387U;
signed char var_17 = (signed char)-106;
short var_18 = (short)12642;
_Bool arr_0 [17] ;
long long int arr_3 [13] ;
short arr_2 [17] ;
signed char arr_5 [13] ;
signed char arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 7663794191091919514LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-22118;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)104 : (signed char)47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-87 : (signed char)-37;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
