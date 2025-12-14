#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4729687040779955156ULL;
unsigned int var_2 = 2544097568U;
unsigned int var_3 = 812088292U;
int var_5 = 2087202760;
unsigned long long int var_7 = 14078082299372792244ULL;
short var_8 = (short)-15825;
long long int var_9 = -3859578627757576511LL;
unsigned int var_10 = 2701308461U;
unsigned int var_12 = 440986696U;
int zero = 0;
signed char var_13 = (signed char)-13;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3501409865U;
unsigned int var_16 = 3427102217U;
unsigned char var_17 = (unsigned char)182;
long long int arr_10 [24] [24] [24] [24] [24] ;
unsigned int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 9102729765875136124LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 202738943U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
