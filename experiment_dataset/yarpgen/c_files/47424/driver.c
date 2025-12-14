#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-18763;
unsigned short var_3 = (unsigned short)18044;
short var_5 = (short)-6386;
_Bool var_6 = (_Bool)1;
int var_7 = -1526351087;
unsigned long long int var_8 = 17127241005261670579ULL;
int var_9 = 793351887;
int zero = 0;
unsigned int var_10 = 1043911709U;
_Bool var_11 = (_Bool)0;
long long int var_12 = -8359102228549316111LL;
unsigned long long int var_13 = 6231270890875993048ULL;
long long int var_14 = 6883904296790046306LL;
signed char var_15 = (signed char)116;
unsigned long long int var_16 = 10408680618082222544ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)24;
int arr_1 [18] ;
int arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1152608092;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 919968826;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 512727127U : 1771064036U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1076423862 : 517694632;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
