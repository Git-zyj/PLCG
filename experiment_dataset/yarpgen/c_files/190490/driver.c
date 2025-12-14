#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4036185240U;
unsigned char var_2 = (unsigned char)184;
signed char var_5 = (signed char)-95;
int var_9 = 278877507;
unsigned int var_10 = 3500418571U;
unsigned short var_11 = (unsigned short)12495;
unsigned short var_13 = (unsigned short)60435;
int zero = 0;
unsigned char var_14 = (unsigned char)30;
int var_15 = -343171106;
short var_16 = (short)-21405;
short var_17 = (short)5591;
short var_18 = (short)13990;
short arr_0 [19] [19] ;
unsigned short arr_2 [19] ;
long long int arr_3 [19] [19] [19] ;
unsigned short arr_4 [19] [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-25323;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)37054;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 8640957934108617924LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)11688;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -491463556;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
