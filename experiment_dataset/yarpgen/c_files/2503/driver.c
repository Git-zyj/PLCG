#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1274764983;
unsigned short var_3 = (unsigned short)11839;
unsigned long long int var_5 = 595052162503063530ULL;
unsigned short var_6 = (unsigned short)37128;
unsigned short var_7 = (unsigned short)20794;
unsigned short var_9 = (unsigned short)29998;
unsigned char var_11 = (unsigned char)241;
int zero = 0;
unsigned short var_13 = (unsigned short)34424;
signed char var_14 = (signed char)-75;
unsigned char var_15 = (unsigned char)60;
unsigned long long int var_16 = 17735528322763815177ULL;
short var_17 = (short)-29256;
unsigned char var_18 = (unsigned char)61;
signed char var_19 = (signed char)109;
short var_20 = (short)-23058;
int arr_1 [20] ;
int arr_2 [20] [20] ;
short arr_5 [21] ;
signed char arr_6 [21] ;
unsigned short arr_7 [21] [21] [21] ;
signed char arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -75796527;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = -1928525221;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)6432;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)21819;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (signed char)(-127 - 1);
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
