#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7863;
unsigned long long int var_1 = 14192897482656421598ULL;
long long int var_3 = -8012148526656909402LL;
short var_6 = (short)-15972;
signed char var_7 = (signed char)2;
long long int var_8 = 532650619060587148LL;
unsigned long long int var_11 = 3033663670315731743ULL;
int zero = 0;
unsigned int var_12 = 1774497237U;
long long int var_13 = -2707981451568679431LL;
unsigned long long int var_14 = 7751832180629463900ULL;
long long int var_15 = -1319869288507868907LL;
long long int arr_2 [15] [15] ;
unsigned char arr_7 [22] [22] ;
signed char arr_4 [15] ;
unsigned short arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 7312975163396626445LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)23337;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
