#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19018;
unsigned char var_1 = (unsigned char)229;
unsigned int var_2 = 1721160421U;
int var_3 = 957840859;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)18617;
unsigned short var_8 = (unsigned short)35529;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)13563;
int var_15 = -802333969;
unsigned short var_16 = (unsigned short)42825;
unsigned int var_17 = 2485887458U;
int var_18 = -1181477977;
_Bool arr_2 [14] ;
unsigned int arr_3 [14] ;
unsigned int arr_4 [14] ;
short arr_6 [14] [14] [14] ;
int arr_9 [17] ;
_Bool arr_10 [17] ;
unsigned short arr_11 [17] ;
short arr_12 [17] [17] ;
signed char arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1980759938U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4264435290U : 3785782872U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29712 : (short)-11154;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 1852854455;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)19596;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (short)4569;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (signed char)14;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
