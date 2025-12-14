#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -939203516;
unsigned long long int var_3 = 4411225657244235705ULL;
unsigned short var_5 = (unsigned short)20190;
unsigned long long int var_6 = 1570853103265791384ULL;
int var_7 = -1224865837;
unsigned short var_8 = (unsigned short)63071;
unsigned int var_12 = 735059339U;
unsigned long long int var_16 = 7380053804427404335ULL;
signed char var_18 = (signed char)51;
int zero = 0;
unsigned short var_19 = (unsigned short)8171;
unsigned long long int var_20 = 7345192419105060787ULL;
unsigned long long int var_21 = 3723164969331576197ULL;
unsigned short var_22 = (unsigned short)41056;
unsigned short arr_0 [19] [19] ;
short arr_1 [19] ;
int arr_3 [19] ;
_Bool arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)43160;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)6448;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 34345873;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
