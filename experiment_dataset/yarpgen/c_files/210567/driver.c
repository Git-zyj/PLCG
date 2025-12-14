#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3935472898344779437LL;
unsigned long long int var_7 = 1195511802341515629ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 2330242797323474595ULL;
long long int var_11 = -6794818931520774522LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 3844622350206055535LL;
unsigned long long int var_14 = 5305613199446167552ULL;
unsigned int var_15 = 1867982068U;
int zero = 0;
unsigned short var_16 = (unsigned short)56017;
long long int var_17 = -4599051316412589141LL;
unsigned char var_18 = (unsigned char)25;
long long int arr_0 [12] ;
int arr_1 [12] [12] ;
_Bool arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2395111027891013645LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -2046900503;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
