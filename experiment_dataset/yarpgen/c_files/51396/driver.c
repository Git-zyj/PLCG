#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6723384613666889162ULL;
long long int var_6 = 3053810351170456091LL;
short var_7 = (short)2202;
unsigned long long int var_9 = 13858994770359145383ULL;
unsigned long long int var_10 = 18026192943468643943ULL;
unsigned long long int var_11 = 17100854276473449368ULL;
unsigned short var_14 = (unsigned short)38574;
unsigned char var_15 = (unsigned char)218;
long long int var_16 = 5729922664274077513LL;
short var_17 = (short)-29475;
unsigned long long int var_18 = 13329477821073265763ULL;
int zero = 0;
unsigned long long int var_19 = 2211190383918313722ULL;
long long int var_20 = -294887453146512324LL;
unsigned long long int var_21 = 8622208870102039413ULL;
unsigned char var_22 = (unsigned char)83;
signed char var_23 = (signed char)24;
short var_24 = (short)18110;
short arr_1 [21] [21] ;
unsigned char arr_2 [21] ;
long long int arr_5 [13] ;
unsigned long long int arr_3 [21] [21] ;
short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)28569;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 5078316155718453111LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 6256899054952274958ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)23861;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
