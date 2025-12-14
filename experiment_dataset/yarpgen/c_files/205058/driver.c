#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5716653947228916908ULL;
unsigned char var_3 = (unsigned char)24;
unsigned short var_4 = (unsigned short)18293;
short var_8 = (short)23545;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -4020202356642052798LL;
unsigned long long int var_12 = 352610228853894969ULL;
unsigned long long int var_13 = 10232356858388428081ULL;
long long int var_14 = -1458030791092189136LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10691127848716286842ULL;
_Bool arr_1 [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14598052071396187554ULL : 352589520957990143ULL;
}

void checksum() {
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
