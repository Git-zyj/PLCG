#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -635824777;
unsigned char var_6 = (unsigned char)64;
unsigned long long int var_9 = 12271492029208410068ULL;
unsigned short var_10 = (unsigned short)46740;
signed char var_11 = (signed char)-36;
int var_12 = 959984038;
unsigned long long int var_15 = 10168175419067196263ULL;
int zero = 0;
int var_18 = -666318099;
signed char var_19 = (signed char)72;
signed char var_20 = (signed char)68;
int var_21 = 2027780715;
unsigned char var_22 = (unsigned char)51;
int var_23 = 1314922291;
int arr_3 [25] ;
_Bool arr_6 [25] [25] [25] ;
short arr_8 [25] ;
unsigned char arr_12 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -303615088;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (short)-14802;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)235;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
