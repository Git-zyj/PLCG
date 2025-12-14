#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1119057891;
unsigned char var_7 = (unsigned char)169;
unsigned int var_11 = 2113759688U;
unsigned char var_13 = (unsigned char)166;
unsigned char var_14 = (unsigned char)169;
int zero = 0;
unsigned char var_15 = (unsigned char)52;
unsigned char var_16 = (unsigned char)222;
unsigned long long int var_17 = 16800041179973788031ULL;
signed char var_18 = (signed char)70;
long long int arr_5 [12] [12] [12] ;
long long int arr_9 [12] [12] [12] ;
short arr_11 [24] ;
long long int arr_12 [24] ;
signed char arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -46958181212110807LL : -7869159452298174961LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2711950550089948375LL : 3979490701967015324LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)-23622;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 4898539784165182272LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)122;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
