#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3445666199U;
signed char var_8 = (signed char)60;
unsigned int var_10 = 3271447988U;
signed char var_14 = (signed char)108;
_Bool var_15 = (_Bool)1;
long long int var_16 = -2004567106048691039LL;
short var_17 = (short)-26995;
int zero = 0;
signed char var_18 = (signed char)-16;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-43;
unsigned short var_21 = (unsigned short)31508;
unsigned char var_22 = (unsigned char)232;
unsigned long long int arr_1 [15] [15] ;
unsigned int arr_2 [15] [15] ;
_Bool arr_4 [15] ;
_Bool arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 6358408645655033816ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 1302306868U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
