#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1357650642;
signed char var_3 = (signed char)67;
unsigned short var_4 = (unsigned short)22179;
unsigned long long int var_6 = 8375031309278944338ULL;
signed char var_11 = (signed char)-75;
signed char var_14 = (signed char)64;
int zero = 0;
short var_19 = (short)8080;
unsigned long long int var_20 = 2700626303820659060ULL;
unsigned int var_21 = 1860988855U;
int var_22 = 2111937394;
int var_23 = -474323875;
unsigned short var_24 = (unsigned short)46842;
unsigned int arr_1 [25] ;
signed char arr_2 [25] [25] ;
unsigned int arr_9 [15] ;
unsigned int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3940106119U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 2833335640U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 768934086U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
