#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4039596509U;
unsigned int var_2 = 2931893763U;
int var_6 = -66588345;
short var_7 = (short)-31761;
unsigned long long int var_11 = 14293840967151359130ULL;
long long int var_12 = -637201941257946478LL;
int zero = 0;
unsigned int var_13 = 1201017479U;
short var_14 = (short)8605;
short var_15 = (short)18968;
short var_16 = (short)-31609;
signed char var_17 = (signed char)74;
unsigned short var_18 = (unsigned short)2753;
_Bool arr_10 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
