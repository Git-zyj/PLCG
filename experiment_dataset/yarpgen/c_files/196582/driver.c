#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)13825;
long long int var_3 = 7434910926511139755LL;
unsigned char var_4 = (unsigned char)54;
long long int var_5 = 8995352943235171697LL;
short var_8 = (short)-13295;
unsigned int var_10 = 3668013504U;
signed char var_11 = (signed char)(-127 - 1);
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)51804;
int zero = 0;
unsigned int var_14 = 3054037530U;
int var_15 = -740704779;
short var_16 = (short)7390;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)34827;
int arr_1 [18] [18] ;
unsigned short arr_2 [18] [18] [18] ;
long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 938928389;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)55899;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 4267392548111464801LL;
}

void checksum() {
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
