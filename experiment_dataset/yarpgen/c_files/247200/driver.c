#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19815;
long long int var_1 = -4878318246944778175LL;
int var_2 = -2004059253;
unsigned int var_3 = 4003802758U;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)58168;
unsigned char var_8 = (unsigned char)227;
long long int var_9 = 8500681798473945904LL;
int var_10 = -1649809797;
unsigned int var_12 = 4175773227U;
int zero = 0;
unsigned short var_13 = (unsigned short)50813;
unsigned int var_14 = 662797644U;
unsigned int var_15 = 1871258495U;
unsigned char var_16 = (unsigned char)136;
unsigned char var_17 = (unsigned char)172;
int arr_0 [24] [24] ;
long long int arr_1 [24] [24] ;
_Bool arr_4 [16] ;
long long int arr_2 [24] ;
unsigned int arr_3 [24] ;
unsigned long long int arr_6 [16] ;
unsigned long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 988676920;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -5622280528500300539LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4358198481490566963LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 293444968U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 3065488915286821739ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 3625174700931973580ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
