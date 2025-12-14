#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 846691873U;
unsigned short var_2 = (unsigned short)7149;
long long int var_4 = 12383919359673503LL;
unsigned int var_7 = 2833325317U;
unsigned char var_18 = (unsigned char)141;
int zero = 0;
long long int var_20 = -4810327705631426445LL;
int var_21 = -1123704398;
signed char var_22 = (signed char)-107;
long long int var_23 = 8982318091124433233LL;
long long int var_24 = -6615942553800199759LL;
unsigned char arr_0 [16] ;
unsigned char arr_1 [16] ;
unsigned short arr_3 [16] [16] ;
signed char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)4158;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)95;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
