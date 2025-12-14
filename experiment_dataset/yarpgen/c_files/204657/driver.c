#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1212278626U;
unsigned long long int var_1 = 14510397658050047201ULL;
long long int var_7 = -3218602104372622123LL;
unsigned int var_10 = 2316131960U;
unsigned long long int var_13 = 18055018045723591392ULL;
long long int var_16 = 2558837005825409302LL;
int zero = 0;
unsigned int var_17 = 1205787712U;
unsigned short var_18 = (unsigned short)20820;
unsigned short arr_2 [22] ;
unsigned char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)58178;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)33;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
