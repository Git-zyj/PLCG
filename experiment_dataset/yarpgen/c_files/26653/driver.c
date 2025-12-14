#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5238801602945394385LL;
unsigned short var_2 = (unsigned short)14718;
long long int var_4 = 6066970761959206273LL;
unsigned long long int var_5 = 3746095960613549280ULL;
unsigned short var_6 = (unsigned short)33984;
long long int var_9 = -4927503437306993247LL;
unsigned long long int var_12 = 2718301630291782746ULL;
int zero = 0;
signed char var_15 = (signed char)0;
unsigned long long int var_16 = 7914761355328940607ULL;
unsigned long long int var_17 = 9083928902932484782ULL;
unsigned long long int var_18 = 13440885909972162520ULL;
unsigned long long int arr_3 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned long long int arr_7 [18] [18] [18] ;
unsigned long long int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2554347626849994103ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 9391123678262703229ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1503185702445575667ULL : 5706900696786433188ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 18383781977023992034ULL : 16987803336126847398ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
