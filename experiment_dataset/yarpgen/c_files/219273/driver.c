#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1422885321;
unsigned short var_8 = (unsigned short)35834;
unsigned char var_13 = (unsigned char)90;
unsigned long long int var_14 = 14289844781716768858ULL;
long long int var_18 = -2373923210528917013LL;
int zero = 0;
unsigned long long int var_19 = 7018867490102105493ULL;
unsigned char var_20 = (unsigned char)49;
unsigned char var_21 = (unsigned char)232;
int var_22 = 597372572;
unsigned short var_23 = (unsigned short)47707;
long long int var_24 = 2248726521636574003LL;
short var_25 = (short)30870;
unsigned int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 2421510889U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
