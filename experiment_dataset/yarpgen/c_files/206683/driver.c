#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19852;
long long int var_5 = 1716980885630453065LL;
int var_6 = 749060696;
unsigned char var_7 = (unsigned char)146;
int var_10 = 797829670;
int zero = 0;
unsigned short var_12 = (unsigned short)52676;
short var_13 = (short)-2796;
unsigned short var_14 = (unsigned short)46299;
int var_15 = 2123275713;
long long int var_16 = 2111100602913555395LL;
unsigned long long int arr_2 [14] ;
long long int arr_3 [14] ;
int arr_5 [14] [14] ;
unsigned char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 9769416028604504136ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -1472090880854416536LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 501760942;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)150;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
