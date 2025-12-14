#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 14814240856584856910ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-74;
int var_10 = -1903586451;
unsigned long long int var_11 = 5319936883822002923ULL;
signed char var_12 = (signed char)-16;
int zero = 0;
unsigned int var_13 = 2767856226U;
long long int var_14 = -1011763867662486230LL;
short var_15 = (short)27820;
long long int var_16 = -4027169644014183755LL;
long long int var_17 = 4059924634627320080LL;
int var_18 = 636413497;
short arr_2 [16] ;
short arr_4 [16] [16] [16] ;
unsigned char arr_5 [16] ;
short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)12805;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-22325;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-22473;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
