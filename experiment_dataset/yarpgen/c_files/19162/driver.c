#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21850;
unsigned long long int var_3 = 13319085890696112064ULL;
unsigned short var_5 = (unsigned short)11443;
long long int var_6 = -1777637169105397507LL;
unsigned int var_7 = 2802616259U;
short var_8 = (short)-29322;
unsigned char var_12 = (unsigned char)28;
short var_13 = (short)12;
signed char var_14 = (signed char)102;
short var_16 = (short)-19924;
int zero = 0;
unsigned long long int var_17 = 4705343186700343574ULL;
int var_18 = 437908774;
unsigned long long int arr_0 [17] [17] ;
long long int arr_1 [17] ;
unsigned int arr_2 [17] ;
unsigned int arr_3 [17] ;
signed char arr_4 [17] ;
unsigned short arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 9587798577577958518ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 5097332663102193343LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3693203708U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1982770136U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)12339;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
