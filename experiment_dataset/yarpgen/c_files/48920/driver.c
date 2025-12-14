#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7736;
signed char var_4 = (signed char)-71;
_Bool var_5 = (_Bool)1;
signed char var_13 = (signed char)-57;
_Bool var_16 = (_Bool)0;
int var_19 = -156308474;
int zero = 0;
signed char var_20 = (signed char)-115;
int var_21 = 1409379421;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)26058;
unsigned long long int var_24 = 17867344003161359690ULL;
unsigned char var_25 = (unsigned char)162;
signed char var_26 = (signed char)-119;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] [24] ;
signed char arr_2 [24] ;
unsigned short arr_3 [24] ;
unsigned long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)65256;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)58280;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)2816;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 10876954857099422112ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
