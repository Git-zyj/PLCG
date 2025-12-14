#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -339351582;
_Bool var_3 = (_Bool)1;
signed char var_10 = (signed char)109;
int zero = 0;
int var_12 = 2069968695;
signed char var_13 = (signed char)-6;
signed char var_14 = (signed char)-4;
unsigned long long int var_15 = 11527538977854136846ULL;
unsigned char var_16 = (unsigned char)23;
unsigned short var_17 = (unsigned short)55505;
signed char var_18 = (signed char)-45;
long long int arr_2 [15] [15] ;
int arr_5 [15] ;
signed char arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 7806661801182133532LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -355795697;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (signed char)107;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
