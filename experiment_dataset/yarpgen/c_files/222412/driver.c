#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)194;
unsigned int var_4 = 1687368944U;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)241;
unsigned int var_7 = 2696209505U;
unsigned char var_8 = (unsigned char)185;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)5;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1653131526U;
unsigned char var_13 = (unsigned char)96;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1927022390U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13552769510224329204ULL;
unsigned char var_19 = (unsigned char)55;
long long int var_20 = -574026238866654899LL;
unsigned char var_21 = (unsigned char)35;
_Bool arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_9 [21] [21] [21] [21] ;
unsigned char arr_7 [21] ;
unsigned char arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)89 : (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned char)164;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
