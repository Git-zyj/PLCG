#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5130592264068035149LL;
long long int var_4 = 777508940158084289LL;
signed char var_5 = (signed char)28;
unsigned long long int var_6 = 191486722327546600ULL;
int var_7 = 1674222601;
unsigned char var_8 = (unsigned char)218;
signed char var_10 = (signed char)-84;
int zero = 0;
unsigned short var_11 = (unsigned short)26553;
unsigned short var_12 = (unsigned short)512;
long long int var_13 = -6393427946547252375LL;
unsigned long long int var_14 = 8124116490351881649ULL;
short var_15 = (short)-11346;
short arr_0 [24] ;
unsigned int arr_1 [24] ;
signed char arr_3 [12] [12] ;
_Bool arr_4 [12] ;
unsigned int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)4651;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2755347869U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-115 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2653007538U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
