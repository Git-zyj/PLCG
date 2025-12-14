#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8756764357956548034LL;
signed char var_1 = (signed char)-7;
_Bool var_3 = (_Bool)1;
long long int var_7 = 7294271893834363361LL;
long long int var_9 = -7997514462508540181LL;
int var_10 = -1855825074;
unsigned short var_12 = (unsigned short)39520;
int var_13 = -1904057922;
int zero = 0;
long long int var_14 = -667412587744040566LL;
int var_15 = 178857512;
long long int var_16 = -2762295045433605759LL;
unsigned char var_17 = (unsigned char)49;
long long int var_18 = 1172115352157811743LL;
short var_19 = (short)-4773;
unsigned short var_20 = (unsigned short)63703;
_Bool arr_0 [18] ;
_Bool arr_1 [18] [18] ;
unsigned short arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)6639;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
