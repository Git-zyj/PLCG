#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1841;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)28436;
signed char var_4 = (signed char)79;
unsigned int var_5 = 2862204653U;
signed char var_6 = (signed char)-126;
long long int var_7 = -8996615090978566982LL;
signed char var_8 = (signed char)29;
unsigned int var_9 = 1577977098U;
int zero = 0;
short var_10 = (short)5607;
unsigned long long int var_11 = 6537445335510012678ULL;
unsigned int var_12 = 2048427316U;
unsigned short var_13 = (unsigned short)6652;
signed char var_14 = (signed char)123;
unsigned short var_15 = (unsigned short)62832;
short var_16 = (short)-2232;
unsigned int var_17 = 2958311114U;
unsigned short arr_1 [19] ;
unsigned int arr_2 [19] ;
short arr_3 [19] [19] ;
int arr_4 [19] ;
short arr_5 [19] [19] ;
unsigned char arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)34706;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2271159768U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-16154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1304993049;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-32515;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)228;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
