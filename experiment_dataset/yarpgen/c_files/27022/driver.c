#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6772;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)65277;
short var_4 = (short)8928;
signed char var_7 = (signed char)103;
short var_8 = (short)-29036;
unsigned short var_10 = (unsigned short)62328;
unsigned char var_11 = (unsigned char)56;
int zero = 0;
unsigned int var_12 = 474885788U;
long long int var_13 = -8731433339545274439LL;
unsigned int var_14 = 2309100350U;
unsigned long long int var_15 = 15966157047273486912ULL;
unsigned int var_16 = 3029515963U;
signed char arr_0 [17] ;
unsigned char arr_2 [17] ;
long long int arr_3 [15] ;
unsigned char arr_6 [15] ;
_Bool arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2507243084718545941LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
