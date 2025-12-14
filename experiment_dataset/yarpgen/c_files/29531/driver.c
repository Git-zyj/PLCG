#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1370771358;
unsigned char var_1 = (unsigned char)248;
unsigned short var_2 = (unsigned short)64502;
short var_3 = (short)-3963;
int var_5 = -1887112248;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_11 = (short)-17896;
unsigned long long int var_12 = 14561887288000730311ULL;
signed char var_13 = (signed char)99;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-18;
unsigned char var_16 = (unsigned char)73;
int arr_0 [20] ;
_Bool arr_1 [20] [20] ;
unsigned int arr_3 [20] [20] ;
short arr_4 [20] ;
signed char arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -998256295;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1350069606U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)3226;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-90;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
