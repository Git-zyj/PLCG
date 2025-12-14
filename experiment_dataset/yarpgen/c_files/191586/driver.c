#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)183;
unsigned short var_11 = (unsigned short)56868;
signed char var_13 = (signed char)31;
int zero = 0;
unsigned char var_16 = (unsigned char)178;
long long int var_17 = 6330502647645887244LL;
unsigned long long int var_18 = 15253498011684938928ULL;
unsigned long long int var_19 = 7161413761891785544ULL;
signed char var_20 = (signed char)35;
unsigned long long int arr_1 [19] [19] ;
short arr_5 [19] ;
int arr_15 [25] ;
signed char arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 5843590847361322913ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-22787;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 989100302;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-41;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
