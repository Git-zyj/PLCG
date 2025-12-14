#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41109;
unsigned char var_3 = (unsigned char)53;
unsigned long long int var_5 = 16988229679774826661ULL;
long long int var_6 = -7426347355527666218LL;
unsigned int var_9 = 1008443647U;
int zero = 0;
short var_13 = (short)-1738;
short var_14 = (short)-21478;
unsigned long long int var_15 = 1511357598115630474ULL;
unsigned char var_16 = (unsigned char)7;
signed char var_17 = (signed char)-81;
short var_18 = (short)-11676;
unsigned int var_19 = 175969742U;
unsigned char var_20 = (unsigned char)150;
unsigned char var_21 = (unsigned char)151;
unsigned int arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
signed char arr_4 [24] ;
_Bool arr_9 [11] [11] ;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3539298278U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3845496429U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-20169;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
