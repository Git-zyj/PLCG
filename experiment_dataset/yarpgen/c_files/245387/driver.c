#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1267564158U;
unsigned char var_2 = (unsigned char)178;
short var_3 = (short)-15883;
short var_5 = (short)8691;
signed char var_9 = (signed char)90;
unsigned char var_12 = (unsigned char)29;
unsigned char var_14 = (unsigned char)254;
short var_17 = (short)18583;
int zero = 0;
signed char var_19 = (signed char)34;
unsigned int var_20 = 2335999186U;
signed char var_21 = (signed char)103;
unsigned int var_22 = 791906662U;
short var_23 = (short)12477;
unsigned int var_24 = 215591375U;
long long int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned short arr_3 [11] [11] ;
unsigned long long int arr_4 [11] ;
signed char arr_5 [11] [11] ;
long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2100494827990344647LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 12222089633099555706ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)7851;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3307981179784583263ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 4732649224907328044LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
