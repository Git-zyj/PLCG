#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48518;
unsigned char var_1 = (unsigned char)126;
unsigned char var_3 = (unsigned char)69;
unsigned long long int var_4 = 15080520895416265009ULL;
int var_8 = -104888613;
short var_11 = (short)-23744;
int zero = 0;
long long int var_17 = -3007718668744545662LL;
unsigned long long int var_18 = 11789244700829585052ULL;
int var_19 = -1235839329;
unsigned char var_20 = (unsigned char)93;
long long int var_21 = 273689448124356049LL;
int arr_1 [22] [22] ;
unsigned long long int arr_4 [22] [22] ;
unsigned long long int arr_5 [22] ;
int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1882491553;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 11562039092669915063ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 11123050690815334602ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1337322528;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
