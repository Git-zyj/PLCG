#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64029;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-102;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)97;
unsigned char var_14 = (unsigned char)174;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 12411481433869836841ULL;
_Bool var_17 = (_Bool)1;
unsigned short arr_0 [23] ;
_Bool arr_1 [23] ;
unsigned long long int arr_2 [23] ;
unsigned long long int arr_3 [16] [16] ;
unsigned int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)21723;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 5883157335905399688ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 16888105760266709964ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2531655415U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
