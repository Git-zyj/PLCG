#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12092360886003639791ULL;
unsigned int var_5 = 1148485175U;
short var_6 = (short)-22137;
unsigned long long int var_7 = 16916703116464614033ULL;
unsigned long long int var_8 = 4257974307313248597ULL;
unsigned long long int var_10 = 17280798237265116083ULL;
int zero = 0;
unsigned long long int var_12 = 15695536203912341860ULL;
unsigned short var_13 = (unsigned short)2977;
long long int var_14 = -3972458685570067689LL;
unsigned int var_15 = 3850854732U;
unsigned long long int var_16 = 8692442533074479300ULL;
unsigned int arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
unsigned long long int arr_2 [12] ;
unsigned int arr_3 [12] ;
_Bool arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 2391372968U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 7660839895467764588ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1090570245U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
