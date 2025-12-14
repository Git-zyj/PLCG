#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21780;
unsigned long long int var_4 = 7344787650698815766ULL;
signed char var_5 = (signed char)55;
unsigned char var_6 = (unsigned char)116;
unsigned long long int var_12 = 17110447643370050492ULL;
unsigned long long int var_13 = 836885433025646541ULL;
long long int var_14 = 4812672784474955297LL;
unsigned int var_15 = 478354715U;
int zero = 0;
long long int var_16 = -1308357648194666625LL;
short var_17 = (short)-27072;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1208416369U;
_Bool var_20 = (_Bool)1;
int arr_1 [17] [17] ;
_Bool arr_4 [18] ;
unsigned short arr_5 [18] ;
_Bool arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 934268392;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)35605;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
