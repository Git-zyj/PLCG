#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1123901307U;
signed char var_4 = (signed char)-95;
unsigned char var_7 = (unsigned char)233;
int zero = 0;
unsigned char var_18 = (unsigned char)34;
unsigned char var_19 = (unsigned char)217;
long long int var_20 = -9168039578195824016LL;
unsigned char var_21 = (unsigned char)40;
long long int arr_0 [24] ;
long long int arr_1 [24] ;
int arr_3 [24] ;
short arr_7 [23] ;
int arr_10 [23] [23] ;
unsigned long long int arr_11 [23] ;
signed char arr_12 [23] [23] ;
unsigned short arr_5 [24] [24] ;
unsigned short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 622020928077650719LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -5759060025675875006LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 742347413;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)21130;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -848552739 : -963404871;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 17685966943389817134ULL : 8114304781495501507ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)12178;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)235;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
