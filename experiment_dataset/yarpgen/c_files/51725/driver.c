#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4457932130758470884ULL;
unsigned char var_2 = (unsigned char)169;
unsigned long long int var_3 = 15258371740407807723ULL;
short var_4 = (short)1220;
unsigned long long int var_5 = 13535695627002664015ULL;
signed char var_10 = (signed char)7;
signed char var_11 = (signed char)102;
short var_13 = (short)-13751;
int zero = 0;
unsigned long long int var_14 = 9456450636911042351ULL;
unsigned int var_15 = 2967411741U;
short var_16 = (short)30482;
unsigned long long int var_17 = 5149684572956614503ULL;
signed char arr_0 [18] ;
short arr_1 [18] ;
unsigned int arr_2 [18] ;
unsigned int arr_3 [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)7529;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1348456649U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1045103793U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-14;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
