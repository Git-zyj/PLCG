#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)59;
unsigned short var_4 = (unsigned short)1468;
signed char var_6 = (signed char)28;
long long int var_7 = -2021507560656162378LL;
short var_8 = (short)-13321;
signed char var_9 = (signed char)-3;
unsigned int var_10 = 2346902162U;
int zero = 0;
int var_11 = -1364909700;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14151272886115719263ULL;
unsigned char var_14 = (unsigned char)102;
unsigned int var_15 = 1504857884U;
long long int arr_1 [23] ;
short arr_2 [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -9170195545924191769LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)15898;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)20612;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
