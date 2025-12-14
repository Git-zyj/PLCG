#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned short var_1 = (unsigned short)27495;
long long int var_3 = -4010782145112194601LL;
unsigned long long int var_5 = 1618400134762552288ULL;
unsigned int var_6 = 4081667752U;
int var_7 = 908684469;
long long int var_9 = -7184187024474098689LL;
int zero = 0;
unsigned char var_10 = (unsigned char)247;
long long int var_11 = -6450203584129082869LL;
int var_12 = 1532139444;
unsigned long long int var_13 = 3652844653033560344ULL;
signed char var_14 = (signed char)-73;
unsigned short var_15 = (unsigned short)42795;
unsigned long long int arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
long long int arr_5 [12] ;
long long int arr_9 [15] ;
signed char arr_11 [15] [15] [15] ;
short arr_12 [15] [15] [15] ;
unsigned char arr_14 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 15875890047914524038ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 3299919867U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 9131067623792688148LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 6549346000796554171LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-23783 : (short)20306;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)174 : (unsigned char)187;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
