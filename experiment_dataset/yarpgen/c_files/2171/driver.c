#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1825714630;
unsigned int var_3 = 1436037723U;
unsigned long long int var_6 = 10295449226748922038ULL;
unsigned int var_7 = 381328157U;
int var_8 = -1942704033;
int var_9 = 1450616084;
signed char var_11 = (signed char)28;
short var_14 = (short)-28472;
int zero = 0;
unsigned char var_15 = (unsigned char)74;
long long int var_16 = 7677675988362243595LL;
signed char var_17 = (signed char)-73;
unsigned int var_18 = 3474206797U;
unsigned long long int arr_0 [15] ;
int arr_1 [15] ;
unsigned short arr_2 [15] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 12174538881709528761ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1016563513;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)31231;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
