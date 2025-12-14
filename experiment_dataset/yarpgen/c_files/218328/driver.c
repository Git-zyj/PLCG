#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8792470058738466097LL;
unsigned long long int var_4 = 3628941060070688928ULL;
short var_7 = (short)-5268;
unsigned int var_9 = 2401531786U;
unsigned char var_10 = (unsigned char)88;
int var_11 = -1563770780;
int zero = 0;
int var_12 = 406080345;
unsigned long long int var_13 = 16480589754943791460ULL;
int var_14 = 805115900;
unsigned long long int var_15 = 3528121693068935773ULL;
unsigned long long int var_16 = 12582704190256096268ULL;
signed char var_17 = (signed char)120;
int var_18 = 751851055;
signed char arr_0 [20] [20] ;
unsigned long long int arr_1 [20] [20] ;
_Bool arr_2 [20] [20] ;
_Bool arr_3 [20] [20] ;
_Bool arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 7501852719002437205ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
