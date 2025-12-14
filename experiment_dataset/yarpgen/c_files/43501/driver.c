#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-52;
long long int var_2 = 5537223078189584005LL;
short var_4 = (short)-32590;
signed char var_5 = (signed char)-20;
short var_7 = (short)-5369;
short var_10 = (short)24104;
unsigned char var_11 = (unsigned char)190;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)107;
unsigned int var_18 = 1613020217U;
int zero = 0;
signed char var_19 = (signed char)95;
long long int var_20 = 5773594077484856401LL;
unsigned char var_21 = (unsigned char)33;
short var_22 = (short)14815;
unsigned long long int var_23 = 12629289047075480236ULL;
signed char var_24 = (signed char)33;
short arr_12 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-6279;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
