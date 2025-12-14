#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1815576242453357191LL;
short var_4 = (short)-3147;
_Bool var_5 = (_Bool)1;
signed char var_10 = (signed char)104;
unsigned long long int var_11 = 16178726271833825823ULL;
unsigned long long int var_14 = 1268207339265220619ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = -40987911305039600LL;
unsigned int var_17 = 96366391U;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-32501;
unsigned long long int var_20 = 5786296091304480934ULL;
short var_21 = (short)-3836;
unsigned long long int arr_2 [13] ;
_Bool arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3088852568539979778ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
