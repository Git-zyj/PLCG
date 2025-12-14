#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22306;
int var_2 = 1603114038;
unsigned long long int var_3 = 13466163012230288537ULL;
unsigned long long int var_5 = 2450232350083150282ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 15967464716754795401ULL;
unsigned short var_8 = (unsigned short)24322;
unsigned short var_10 = (unsigned short)48847;
short var_11 = (short)17806;
unsigned short var_12 = (unsigned short)43777;
unsigned int var_13 = 3478787411U;
int zero = 0;
unsigned int var_15 = 1380381521U;
signed char var_16 = (signed char)31;
int var_17 = -821572016;
short var_18 = (short)-21082;
short var_19 = (short)1141;
signed char var_20 = (signed char)73;
_Bool arr_1 [17] ;
unsigned short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50929 : (unsigned short)54196;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
