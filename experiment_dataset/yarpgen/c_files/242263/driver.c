#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3239404113437125471ULL;
unsigned int var_4 = 2106460000U;
unsigned long long int var_5 = 16782312802135085009ULL;
short var_7 = (short)18640;
long long int var_8 = -3298279002576516899LL;
short var_9 = (short)-8405;
unsigned short var_10 = (unsigned short)34545;
unsigned int var_11 = 3985423473U;
unsigned int var_14 = 659380098U;
int zero = 0;
unsigned long long int var_16 = 13938467528694942768ULL;
short var_17 = (short)15311;
short var_18 = (short)7047;
_Bool var_19 = (_Bool)1;
_Bool arr_1 [24] [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)58316;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
