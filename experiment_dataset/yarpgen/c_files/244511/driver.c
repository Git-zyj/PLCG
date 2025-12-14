#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35174;
unsigned short var_1 = (unsigned short)38230;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)34658;
int var_8 = -1990770423;
unsigned long long int var_12 = 9148446926033667293ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)95;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4454866401764512210ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 11647695059413327726ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
