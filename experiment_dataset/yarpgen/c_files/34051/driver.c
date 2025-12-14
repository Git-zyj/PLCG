#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38087;
long long int var_4 = -1313230790440595123LL;
int var_5 = -1800569226;
unsigned int var_9 = 2047060943U;
unsigned int var_10 = 1987766206U;
unsigned short var_12 = (unsigned short)23937;
unsigned long long int var_13 = 1715516940774284337ULL;
unsigned char var_14 = (unsigned char)79;
long long int var_15 = 2115885666432319427LL;
signed char var_16 = (signed char)-21;
int zero = 0;
int var_17 = -1360592622;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1424931293498336190LL;
unsigned int var_20 = 2698396115U;
int var_21 = -1127242305;
_Bool arr_0 [21] [21] ;
unsigned char arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)224;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
