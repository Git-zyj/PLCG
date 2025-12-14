#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
signed char var_2 = (signed char)127;
unsigned short var_4 = (unsigned short)63338;
unsigned short var_6 = (unsigned short)43942;
int var_8 = -535941908;
short var_10 = (short)11925;
int zero = 0;
unsigned short var_14 = (unsigned short)63717;
unsigned char var_15 = (unsigned char)26;
unsigned char var_16 = (unsigned char)179;
unsigned long long int var_17 = 133062671951192388ULL;
_Bool arr_1 [21] ;
unsigned long long int arr_3 [21] ;
unsigned short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 15207715961598256372ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)20357;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
