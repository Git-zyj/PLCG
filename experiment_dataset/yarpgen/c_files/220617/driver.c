#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8091;
long long int var_4 = 6615451520597900808LL;
unsigned int var_6 = 218821938U;
unsigned char var_8 = (unsigned char)113;
unsigned int var_9 = 2279507210U;
signed char var_11 = (signed char)56;
int zero = 0;
unsigned short var_13 = (unsigned short)17763;
unsigned long long int var_14 = 9549092810769380171ULL;
unsigned long long int var_15 = 16305156449656332014ULL;
unsigned int var_16 = 138892379U;
short var_17 = (short)-17350;
signed char arr_0 [21] ;
unsigned int arr_1 [21] ;
signed char arr_2 [21] [21] ;
long long int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1949017914U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-97 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 7148995644542091571LL : -4079181104141840803LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
