#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6859936870833412662LL;
short var_4 = (short)-5356;
unsigned int var_7 = 2464614317U;
int var_8 = -1432391950;
int zero = 0;
unsigned int var_12 = 1646662401U;
unsigned char var_13 = (unsigned char)46;
unsigned long long int var_14 = 4468851843137549223ULL;
unsigned long long int var_15 = 9009378689225519644ULL;
long long int var_16 = 2133002856289767085LL;
unsigned int var_17 = 2774061246U;
long long int var_18 = -735203814923127189LL;
short arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
unsigned long long int arr_3 [21] ;
signed char arr_5 [15] ;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-25958;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 37553482U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3281705026989299034ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)27;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
