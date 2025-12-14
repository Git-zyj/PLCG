#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -265604977;
int var_2 = -1135225447;
unsigned short var_7 = (unsigned short)12287;
int var_8 = 1955652145;
short var_12 = (short)-18232;
unsigned short var_13 = (unsigned short)62755;
unsigned long long int var_15 = 13227364108964781307ULL;
int zero = 0;
signed char var_17 = (signed char)42;
signed char var_18 = (signed char)30;
int var_19 = -1139299169;
unsigned long long int var_20 = 14294290725464720697ULL;
signed char arr_0 [10] ;
unsigned char arr_5 [10] [10] [10] ;
signed char arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)117 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)35 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-54 : (signed char)-49;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
