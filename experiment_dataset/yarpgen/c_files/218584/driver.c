#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16321323181553662027ULL;
unsigned int var_6 = 2422985995U;
signed char var_7 = (signed char)-13;
unsigned int var_10 = 4042832729U;
long long int var_11 = -1974314171857353321LL;
unsigned char var_12 = (unsigned char)248;
short var_13 = (short)-1934;
signed char var_14 = (signed char)116;
int var_15 = 184211265;
unsigned int var_17 = 3195016957U;
int zero = 0;
unsigned int var_18 = 3562076181U;
unsigned int var_19 = 3242380668U;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)208;
unsigned long long int var_22 = 7257157498158237607ULL;
int arr_0 [15] ;
unsigned int arr_1 [15] ;
int arr_3 [15] [15] ;
_Bool arr_4 [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1824145564;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2162197244U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = -1343139769;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)9568;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
