#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)113;
unsigned short var_5 = (unsigned short)17329;
unsigned int var_6 = 660993591U;
int var_7 = -1477613371;
int var_8 = -1517695254;
unsigned short var_9 = (unsigned short)60573;
int var_10 = -1605416329;
int var_11 = 1194714520;
int zero = 0;
int var_12 = 1341678902;
short var_13 = (short)2896;
unsigned int var_14 = 383826788U;
unsigned char var_15 = (unsigned char)36;
short arr_1 [12] ;
short arr_3 [12] ;
unsigned int arr_5 [12] [12] [12] ;
short arr_10 [24] ;
unsigned long long int arr_11 [24] [24] ;
unsigned int arr_12 [24] ;
signed char arr_13 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)6913;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)15817;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3587938948U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)32420;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 15586041420421433033ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 3651188654U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)21 : (signed char)32;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
