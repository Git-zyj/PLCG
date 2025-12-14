#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4701356581894697905LL;
unsigned int var_1 = 1269531516U;
unsigned int var_3 = 4080349257U;
int var_4 = -1180952984;
signed char var_7 = (signed char)87;
short var_8 = (short)28069;
int zero = 0;
unsigned long long int var_13 = 6208037593693003970ULL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)30823;
short var_16 = (short)-14647;
unsigned char var_17 = (unsigned char)123;
signed char arr_1 [11] ;
int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1929929171;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
