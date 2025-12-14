#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2285507152667745990ULL;
unsigned short var_1 = (unsigned short)26492;
long long int var_3 = 5781454190997045507LL;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)37605;
unsigned char var_12 = (unsigned char)0;
long long int var_14 = 5756346989991277511LL;
signed char var_15 = (signed char)-73;
unsigned short var_17 = (unsigned short)32885;
short var_18 = (short)1971;
int zero = 0;
unsigned int var_20 = 1312270926U;
unsigned char var_21 = (unsigned char)254;
unsigned char var_22 = (unsigned char)43;
int var_23 = 305982737;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)101;
long long int arr_14 [25] [25] [25] ;
long long int arr_20 [25] ;
short arr_21 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 413621156784681030LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = -2201103617302297161LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)-3494;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
