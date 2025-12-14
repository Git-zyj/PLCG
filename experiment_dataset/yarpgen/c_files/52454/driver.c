#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2660598746386944614ULL;
unsigned int var_4 = 158169044U;
unsigned int var_6 = 756513972U;
unsigned char var_10 = (unsigned char)59;
signed char var_11 = (signed char)-96;
short var_12 = (short)17937;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 16085499989707904645ULL;
int zero = 0;
int var_15 = 729727184;
unsigned char var_16 = (unsigned char)95;
short var_17 = (short)7051;
short var_18 = (short)12249;
short var_19 = (short)-1592;
short arr_1 [12] [12] ;
long long int arr_3 [12] [12] ;
unsigned char arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-21835;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -8500965760014836185LL : -1727290408958016867LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)41 : (unsigned char)181;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
