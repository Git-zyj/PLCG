#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned long long int var_1 = 2479015647479517853ULL;
long long int var_7 = 733057655562105798LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_13 = -7794782;
unsigned long long int var_14 = 3524701792502445978ULL;
long long int var_15 = 5797675920715845340LL;
unsigned char var_16 = (unsigned char)246;
int arr_0 [15] ;
int arr_1 [15] ;
short arr_2 [15] ;
unsigned int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1272914264;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1771198287;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-20996;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1593384839U;
}

void checksum() {
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
