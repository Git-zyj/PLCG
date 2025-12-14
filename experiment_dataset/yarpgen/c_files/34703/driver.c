#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2041101848;
int var_1 = 104036754;
signed char var_2 = (signed char)64;
signed char var_5 = (signed char)35;
unsigned char var_6 = (unsigned char)35;
unsigned short var_7 = (unsigned short)8524;
int zero = 0;
unsigned short var_10 = (unsigned short)9921;
signed char var_11 = (signed char)92;
unsigned long long int var_12 = 1555450255811506139ULL;
signed char var_13 = (signed char)-64;
signed char var_14 = (signed char)-60;
signed char var_15 = (signed char)96;
unsigned int var_16 = 2587885907U;
unsigned char var_17 = (unsigned char)56;
unsigned char arr_0 [17] [17] ;
int arr_1 [17] ;
unsigned char arr_3 [17] [17] ;
signed char arr_4 [24] ;
unsigned char arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -765750986;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
