#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
unsigned int var_4 = 3065607773U;
unsigned long long int var_5 = 2911756900428542065ULL;
short var_6 = (short)28867;
signed char var_8 = (signed char)14;
short var_9 = (short)14956;
int zero = 0;
unsigned char var_12 = (unsigned char)234;
unsigned int var_13 = 2541026049U;
short var_14 = (short)-31197;
unsigned short var_15 = (unsigned short)44547;
long long int var_16 = -4435687512715864658LL;
_Bool var_17 = (_Bool)1;
short arr_0 [25] ;
signed char arr_2 [25] ;
int arr_3 [25] ;
unsigned long long int arr_5 [25] ;
signed char arr_6 [25] ;
unsigned int arr_10 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-19399;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1938900280;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3382660593668651413ULL : 2667931638683662131ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-75 : (signed char)42;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 2103251711U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
