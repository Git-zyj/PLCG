#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1885371074540356046LL;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)54276;
short var_5 = (short)-1784;
int var_8 = 378559870;
int var_9 = -1404310715;
int zero = 0;
unsigned long long int var_10 = 12855011420799746996ULL;
int var_11 = 1700555752;
unsigned char var_12 = (unsigned char)53;
int var_13 = -1711772843;
short var_14 = (short)21370;
signed char var_15 = (signed char)-38;
_Bool var_16 = (_Bool)0;
signed char arr_0 [10] ;
int arr_2 [10] ;
int arr_4 [10] ;
unsigned char arr_7 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 992536470;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -1785730760;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)95;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
