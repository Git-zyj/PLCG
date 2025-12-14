#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3070195519U;
unsigned char var_3 = (unsigned char)169;
unsigned char var_4 = (unsigned char)114;
unsigned short var_6 = (unsigned short)49300;
unsigned char var_11 = (unsigned char)159;
long long int var_13 = 6919895937378662801LL;
int zero = 0;
unsigned int var_14 = 1060064449U;
short var_15 = (short)-30880;
unsigned char var_16 = (unsigned char)238;
short var_17 = (short)-17595;
unsigned short var_18 = (unsigned short)4420;
unsigned int var_19 = 1011198000U;
_Bool arr_0 [19] ;
unsigned int arr_2 [19] [19] ;
unsigned char arr_4 [22] ;
unsigned long long int arr_9 [18] ;
int arr_6 [22] ;
unsigned long long int arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1941535075U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 12237013453392566102ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1864195823 : -1624357469;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 18152623306581337723ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
