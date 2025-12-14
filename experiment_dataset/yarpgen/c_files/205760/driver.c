#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33400;
int var_4 = 47168873;
signed char var_6 = (signed char)73;
unsigned short var_8 = (unsigned short)41641;
signed char var_9 = (signed char)-103;
int zero = 0;
unsigned long long int var_11 = 17122096303649392596ULL;
short var_12 = (short)-7134;
unsigned char var_13 = (unsigned char)56;
int var_14 = 1896249799;
short var_15 = (short)-7338;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned long long int arr_0 [10] ;
int arr_1 [10] ;
int arr_2 [10] [10] ;
unsigned short arr_3 [10] ;
unsigned short arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 17085638836821241463ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1084883835;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1828434473;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)52062;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)19209;
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
