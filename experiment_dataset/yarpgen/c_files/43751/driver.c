#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2740565495U;
long long int var_5 = 3295499828629417240LL;
unsigned short var_7 = (unsigned short)59690;
signed char var_8 = (signed char)41;
unsigned int var_11 = 1652779974U;
unsigned char var_12 = (unsigned char)151;
int zero = 0;
unsigned char var_14 = (unsigned char)155;
unsigned long long int var_15 = 14512597420905544896ULL;
unsigned int var_16 = 4197270854U;
unsigned char var_17 = (unsigned char)94;
unsigned char var_18 = (unsigned char)242;
unsigned long long int var_19 = 6169707327960518289ULL;
unsigned short var_20 = (unsigned short)59326;
short arr_0 [10] [10] ;
long long int arr_1 [10] ;
unsigned short arr_2 [10] ;
unsigned long long int arr_3 [10] [10] ;
int arr_4 [10] [10] ;
unsigned int arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-18226;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 279879504587948530LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)55862;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 8754393349719888186ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 429179389;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 385489045U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
