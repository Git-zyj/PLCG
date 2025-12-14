#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41331;
signed char var_1 = (signed char)-79;
int var_2 = 1829555339;
unsigned short var_3 = (unsigned short)4984;
unsigned long long int var_4 = 10111842344588986541ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 217744455;
unsigned long long int var_7 = 3939307618480606147ULL;
signed char var_8 = (signed char)-17;
signed char var_9 = (signed char)-58;
int zero = 0;
short var_10 = (short)18842;
int var_11 = -2003795287;
short var_12 = (short)-18620;
unsigned long long int var_13 = 13393517952766722304ULL;
signed char var_14 = (signed char)35;
int arr_2 [11] [11] [11] ;
int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1863047510 : 1940535396;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1942688149 : -1636298200;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
