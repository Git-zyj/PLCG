#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63243;
unsigned char var_1 = (unsigned char)164;
_Bool var_2 = (_Bool)1;
long long int var_4 = -3159129958905401921LL;
unsigned char var_6 = (unsigned char)150;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-4964;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)48478;
int zero = 0;
unsigned int var_12 = 2777745270U;
long long int var_13 = 5815780416702691164LL;
long long int var_14 = 2828840144870188283LL;
unsigned int var_15 = 3983105595U;
unsigned long long int var_16 = 336606046319675210ULL;
short var_17 = (short)-12025;
signed char var_18 = (signed char)100;
unsigned long long int var_19 = 9454675958146193946ULL;
long long int var_20 = 5126652566204178335LL;
signed char arr_4 [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -7583603032962528509LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
