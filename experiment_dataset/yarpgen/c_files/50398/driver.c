#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 956916004U;
unsigned int var_2 = 3800597526U;
unsigned char var_3 = (unsigned char)181;
unsigned int var_4 = 3103086219U;
unsigned int var_5 = 2503238960U;
unsigned char var_9 = (unsigned char)37;
unsigned long long int var_11 = 10781776786208570817ULL;
int zero = 0;
unsigned long long int var_19 = 338003748589418502ULL;
unsigned short var_20 = (unsigned short)23204;
unsigned char var_21 = (unsigned char)218;
unsigned int var_22 = 1313919940U;
unsigned long long int var_23 = 11042194699127270927ULL;
unsigned int var_24 = 2144132283U;
unsigned int arr_0 [12] ;
unsigned short arr_3 [20] ;
unsigned int arr_4 [20] ;
unsigned int arr_2 [12] ;
unsigned short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3448224400U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)15354;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3241462066U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1682349728U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)55517;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
