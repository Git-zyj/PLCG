#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4180374475182504460LL;
unsigned char var_3 = (unsigned char)212;
unsigned char var_4 = (unsigned char)248;
signed char var_5 = (signed char)50;
unsigned char var_8 = (unsigned char)189;
unsigned short var_10 = (unsigned short)28058;
int zero = 0;
unsigned long long int var_13 = 16076444038313681468ULL;
short var_14 = (short)8799;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3447933764U;
_Bool var_17 = (_Bool)1;
unsigned short arr_0 [18] [18] ;
short arr_1 [18] [18] ;
unsigned char arr_3 [18] [18] [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)63000;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-21993;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-68;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
