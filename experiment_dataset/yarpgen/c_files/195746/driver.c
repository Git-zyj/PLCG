#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)16;
short var_6 = (short)31427;
unsigned short var_10 = (unsigned short)54347;
unsigned char var_11 = (unsigned char)204;
long long int var_12 = -300383474651696837LL;
short var_16 = (short)-22869;
int zero = 0;
int var_17 = -1966884546;
short var_18 = (short)13207;
unsigned long long int var_19 = 14494757617249810865ULL;
unsigned int var_20 = 34427295U;
long long int var_21 = 7753938630796789072LL;
int var_22 = 1718168022;
int var_23 = -464579550;
int var_24 = 1746141846;
unsigned long long int var_25 = 666904108965464299ULL;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
short arr_2 [16] ;
unsigned long long int arr_4 [16] ;
unsigned char arr_7 [17] [17] ;
unsigned int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2494044668U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4041155987U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-21091;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 17972890344640855388ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1503094028U : 4259003392U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
