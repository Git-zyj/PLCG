#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28523;
signed char var_5 = (signed char)-28;
signed char var_6 = (signed char)34;
int var_7 = 1834381651;
int var_9 = 474740382;
unsigned long long int var_10 = 2114587831808139126ULL;
short var_14 = (short)-15704;
int zero = 0;
unsigned long long int var_15 = 1996707599969926040ULL;
int var_16 = -384452712;
unsigned int var_17 = 3679431140U;
int arr_0 [16] ;
unsigned short arr_2 [16] [16] ;
int arr_3 [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1273126910;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)46628;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -968664056;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)42111;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
