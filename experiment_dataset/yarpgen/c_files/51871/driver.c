#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)23;
int var_5 = 1642859169;
unsigned short var_6 = (unsigned short)26841;
int var_8 = -562411666;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-98;
unsigned int var_14 = 2900476904U;
unsigned char var_15 = (unsigned char)70;
_Bool var_16 = (_Bool)1;
int arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 5237571;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4098415762U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 3421923009732446654ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 1897363822;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
