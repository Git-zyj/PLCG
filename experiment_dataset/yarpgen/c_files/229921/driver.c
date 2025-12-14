#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7635326780349531392LL;
unsigned long long int var_7 = 3465203779466220598ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 17088493032496028268ULL;
unsigned long long int var_15 = 5137549113585848698ULL;
long long int var_16 = 3349385715888751018LL;
unsigned long long int var_17 = 304809377600129991ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)188;
unsigned char var_21 = (unsigned char)47;
long long int var_22 = 4264598683467659513LL;
long long int var_23 = -115153191028367246LL;
unsigned long long int var_24 = 12514950002250696019ULL;
unsigned long long int var_25 = 5242848244794616007ULL;
long long int var_26 = -4060587536648536809LL;
unsigned long long int var_27 = 7697764836240557346ULL;
unsigned char var_28 = (unsigned char)4;
_Bool arr_1 [16] [16] ;
_Bool arr_2 [16] ;
_Bool arr_3 [16] ;
unsigned long long int arr_6 [25] ;
unsigned char arr_8 [25] [25] ;
unsigned char arr_12 [25] [25] ;
unsigned char arr_5 [16] ;
long long int arr_9 [25] ;
long long int arr_10 [25] ;
_Bool arr_18 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 17087513383661410507ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4129261292068047818LL : -2820046446773415233LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 4912968561491106287LL : -3898382090142635831LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
