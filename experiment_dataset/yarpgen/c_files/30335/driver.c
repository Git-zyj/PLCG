#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2701697683U;
short var_2 = (short)30878;
unsigned long long int var_6 = 4197277476450207706ULL;
unsigned char var_10 = (unsigned char)22;
short var_13 = (short)2366;
unsigned char var_15 = (unsigned char)179;
int zero = 0;
unsigned long long int var_17 = 8719299877422407ULL;
signed char var_18 = (signed char)105;
unsigned int var_19 = 39673738U;
unsigned long long int arr_1 [15] ;
unsigned short arr_2 [15] ;
short arr_4 [15] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 13476610921521019012ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)1262;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)-2422;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1691791212U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
