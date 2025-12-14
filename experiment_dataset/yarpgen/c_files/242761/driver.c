#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2851;
long long int var_2 = -6834784614379132949LL;
unsigned long long int var_5 = 6278244778545086084ULL;
signed char var_6 = (signed char)-27;
long long int var_8 = 6479711017735296592LL;
signed char var_9 = (signed char)87;
short var_11 = (short)17308;
_Bool var_12 = (_Bool)0;
int var_13 = -992956115;
unsigned short var_14 = (unsigned short)53656;
int zero = 0;
long long int var_17 = -6518348276669576960LL;
unsigned long long int var_18 = 6413722590171228081ULL;
unsigned char var_19 = (unsigned char)42;
long long int var_20 = -5787474250616556682LL;
signed char var_21 = (signed char)112;
unsigned int arr_0 [12] ;
unsigned char arr_3 [12] [12] ;
short arr_4 [12] ;
short arr_6 [12] ;
short arr_8 [23] ;
unsigned short arr_9 [23] ;
int arr_2 [12] ;
int arr_10 [23] ;
unsigned long long int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 121422138U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)14295;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)4051;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)26119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)41843;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1404601445;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -800551450;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 5128761146059697266ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
