#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3193958405U;
unsigned long long int var_6 = 8709888350844055081ULL;
unsigned int var_7 = 4163617868U;
unsigned long long int var_11 = 5364784803157982849ULL;
unsigned char var_12 = (unsigned char)6;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-20;
unsigned char var_18 = (unsigned char)115;
unsigned long long int var_19 = 6107248040945534975ULL;
unsigned long long int var_20 = 7741026010215577002ULL;
unsigned char var_21 = (unsigned char)128;
unsigned char var_22 = (unsigned char)107;
unsigned int var_23 = 874766077U;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 9451407899643246837ULL;
unsigned long long int arr_0 [23] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 7781601656666284069ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 12011143982452141534ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 7869034713375231120ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
