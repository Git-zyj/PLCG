#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -857494912;
short var_1 = (short)2991;
int var_2 = 987521806;
unsigned short var_3 = (unsigned short)39073;
signed char var_4 = (signed char)-70;
signed char var_5 = (signed char)43;
_Bool var_6 = (_Bool)1;
short var_7 = (short)25251;
unsigned int var_9 = 2559630053U;
unsigned int var_14 = 924273440U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)45996;
short var_19 = (short)-10615;
signed char arr_0 [18] ;
short arr_3 [18] ;
int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-8479;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -1500972886;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
