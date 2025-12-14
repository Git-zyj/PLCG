#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14949551854751218865ULL;
unsigned char var_2 = (unsigned char)152;
unsigned int var_4 = 1477449444U;
int var_6 = 1222077011;
int var_7 = 1080396371;
unsigned long long int var_8 = 10167461901110399096ULL;
short var_9 = (short)29950;
int zero = 0;
unsigned long long int var_10 = 13817398302453910513ULL;
int var_11 = 2413009;
unsigned long long int var_12 = 11623553608037517883ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2961026716362008378LL;
signed char var_15 = (signed char)65;
unsigned long long int var_16 = 15872237583746930624ULL;
_Bool arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
