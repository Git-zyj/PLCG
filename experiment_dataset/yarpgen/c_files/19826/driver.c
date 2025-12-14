#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10942207637682333804ULL;
long long int var_2 = 7774398892296714625LL;
unsigned char var_3 = (unsigned char)123;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-4;
long long int var_10 = -3476585228093475829LL;
unsigned short var_11 = (unsigned short)55057;
signed char var_13 = (signed char)76;
unsigned long long int var_14 = 17497817214173908958ULL;
int zero = 0;
signed char var_15 = (signed char)-8;
unsigned long long int var_16 = 11016024846135530955ULL;
unsigned int var_17 = 2934770489U;
short var_18 = (short)32354;
unsigned short var_19 = (unsigned short)50607;
unsigned short var_20 = (unsigned short)8768;
unsigned short var_21 = (unsigned short)3525;
long long int arr_2 [13] [13] ;
unsigned long long int arr_3 [13] ;
signed char arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -6861070249447348937LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 7347461578874025949ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-8 : (signed char)-65;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
