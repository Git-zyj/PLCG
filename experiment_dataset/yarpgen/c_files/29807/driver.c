#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24862;
short var_6 = (short)19824;
signed char var_7 = (signed char)89;
short var_12 = (short)-4164;
long long int var_14 = -3705634249718152755LL;
int zero = 0;
short var_15 = (short)-32429;
_Bool var_16 = (_Bool)1;
int var_17 = -997900785;
unsigned short var_18 = (unsigned short)10293;
unsigned int var_19 = 1423870173U;
unsigned int var_20 = 2977760219U;
unsigned long long int var_21 = 8667944470381652678ULL;
short var_22 = (short)-16789;
_Bool arr_0 [14] ;
signed char arr_1 [14] [14] ;
signed char arr_2 [14] ;
int arr_3 [14] ;
_Bool arr_4 [14] [14] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -860718793;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)211;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
