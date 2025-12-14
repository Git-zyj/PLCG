#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25179;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)31;
signed char var_4 = (signed char)102;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)42;
unsigned long long int var_10 = 7622879030644799722ULL;
unsigned long long int var_13 = 3751921597825976330ULL;
int zero = 0;
short var_17 = (short)-8685;
short var_18 = (short)29551;
unsigned char var_19 = (unsigned char)199;
short var_20 = (short)-26265;
short var_21 = (short)-26028;
long long int arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
signed char arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1782173841972905281LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2494538942U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-40;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
