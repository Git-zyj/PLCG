#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3013;
long long int var_2 = 1271565317214149624LL;
signed char var_3 = (signed char)115;
unsigned int var_7 = 1255414384U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 334598354U;
long long int var_11 = 1768565149471107080LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)72;
unsigned int var_14 = 169864653U;
signed char var_15 = (signed char)124;
long long int var_16 = -4114591089823727787LL;
unsigned char var_17 = (unsigned char)116;
int var_18 = -401789576;
unsigned short arr_0 [11] ;
_Bool arr_1 [11] [11] ;
signed char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55443 : (unsigned short)5319;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)42;
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
