#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20500;
unsigned char var_5 = (unsigned char)177;
unsigned int var_6 = 3689935167U;
unsigned char var_7 = (unsigned char)129;
signed char var_8 = (signed char)42;
unsigned int var_9 = 2114696902U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 13825318030006779016ULL;
unsigned long long int var_12 = 17180175092120632346ULL;
unsigned char var_14 = (unsigned char)184;
int zero = 0;
int var_15 = 1887216535;
unsigned char var_16 = (unsigned char)140;
signed char var_17 = (signed char)74;
unsigned char var_18 = (unsigned char)132;
int var_19 = -363169851;
int var_20 = -781884551;
int arr_6 [20] ;
unsigned short arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 611016851 : -1140756352;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)33407 : (unsigned short)4557;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
