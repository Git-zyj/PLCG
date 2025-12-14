#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
unsigned char var_2 = (unsigned char)243;
unsigned int var_3 = 1934885886U;
short var_4 = (short)-11072;
short var_5 = (short)-2446;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 15461840751886175454ULL;
short var_9 = (short)-27303;
unsigned long long int var_11 = 5664417849129244168ULL;
int zero = 0;
unsigned int var_12 = 2232250975U;
short var_13 = (short)-30655;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)6625;
unsigned int arr_1 [14] [14] ;
unsigned short arr_4 [14] ;
signed char arr_6 [14] [14] [14] ;
unsigned int arr_8 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1388003290U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)39733;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1426065908U;
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
