#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3730649485U;
unsigned char var_2 = (unsigned char)184;
unsigned int var_3 = 1782039511U;
unsigned char var_4 = (unsigned char)121;
int var_5 = -938420560;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3403790497U;
int zero = 0;
unsigned int var_10 = 3063059780U;
unsigned char var_11 = (unsigned char)199;
long long int var_12 = -2890697595723855341LL;
unsigned char var_13 = (unsigned char)137;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)19;
_Bool arr_1 [25] [25] ;
signed char arr_3 [25] [25] ;
unsigned int arr_8 [24] ;
unsigned char arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1696874395U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)32;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
