#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)14;
unsigned short var_7 = (unsigned short)5342;
long long int var_8 = -1438687326923373194LL;
unsigned int var_9 = 1556815847U;
signed char var_11 = (signed char)119;
short var_13 = (short)-22686;
int zero = 0;
unsigned long long int var_14 = 5589691018915968568ULL;
unsigned char var_15 = (unsigned char)215;
unsigned int var_16 = 4199498229U;
unsigned int var_17 = 3995193657U;
int var_18 = -771555294;
unsigned short var_19 = (unsigned short)32858;
short arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned short arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)24053;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)49626;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)34684;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
