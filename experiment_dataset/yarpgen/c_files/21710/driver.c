#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58771;
unsigned long long int var_1 = 3705469196488405899ULL;
unsigned char var_2 = (unsigned char)122;
unsigned char var_4 = (unsigned char)239;
int var_5 = 2001321788;
int zero = 0;
int var_11 = -1729286042;
unsigned char var_12 = (unsigned char)73;
short var_13 = (short)3570;
unsigned short var_14 = (unsigned short)18020;
unsigned long long int var_15 = 16790620490952125855ULL;
_Bool arr_0 [23] ;
unsigned int arr_1 [23] ;
long long int arr_2 [23] [23] ;
unsigned long long int arr_3 [23] ;
signed char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1855465863U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 6670263165650558225LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 16957488597612739782ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)122;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
