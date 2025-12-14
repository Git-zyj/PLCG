#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16533;
unsigned long long int var_2 = 6372541919497125526ULL;
unsigned long long int var_4 = 14812490770772582575ULL;
unsigned long long int var_5 = 598716145048546531ULL;
short var_7 = (short)12173;
unsigned long long int var_8 = 14533903349276804551ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)17;
unsigned char var_11 = (unsigned char)127;
signed char var_12 = (signed char)60;
unsigned short var_13 = (unsigned short)62308;
unsigned long long int var_14 = 4501885054887751015ULL;
signed char var_15 = (signed char)110;
unsigned short arr_0 [18] [18] ;
signed char arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)33530;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 502784968382596556ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1945840772612558921ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
