#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned char var_3 = (unsigned char)215;
long long int var_5 = 4464992859458569703LL;
int var_6 = 1765852483;
unsigned char var_9 = (unsigned char)62;
long long int var_12 = -4253190184065541143LL;
unsigned char var_13 = (unsigned char)80;
int zero = 0;
int var_14 = -1138316186;
unsigned long long int var_15 = 11476567136903724251ULL;
int var_16 = 206331886;
long long int var_17 = -6607702720360538935LL;
int var_18 = 947169546;
int var_19 = -1094421384;
long long int var_20 = -8440263145876106571LL;
int arr_0 [22] ;
unsigned char arr_1 [22] ;
long long int arr_2 [22] ;
long long int arr_7 [22] ;
unsigned char arr_8 [22] ;
unsigned long long int arr_11 [22] ;
unsigned char arr_4 [22] ;
unsigned long long int arr_5 [22] ;
int arr_12 [22] ;
int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1730830361;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 7628646449855868887LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 8130704881922876785LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 13092117240848760993ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1947593293836311416ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 429762005 : -670665448;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -2093930571 : -930902657;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
