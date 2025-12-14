#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12887874955556306876ULL;
unsigned short var_5 = (unsigned short)48951;
unsigned short var_6 = (unsigned short)9014;
long long int var_7 = -5017659758950820365LL;
signed char var_8 = (signed char)57;
unsigned short var_12 = (unsigned short)58218;
int zero = 0;
unsigned char var_15 = (unsigned char)128;
long long int var_16 = 893030973227376686LL;
unsigned short var_17 = (unsigned short)48362;
unsigned int var_18 = 2777835846U;
signed char arr_0 [25] [25] ;
long long int arr_4 [16] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 7925990206160475405LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)13663;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
