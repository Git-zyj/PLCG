#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1580479959U;
unsigned short var_4 = (unsigned short)54355;
unsigned short var_6 = (unsigned short)25691;
unsigned int var_8 = 3014599707U;
long long int var_10 = 784363044322614191LL;
long long int var_12 = -3482070645571514621LL;
long long int var_13 = 4923940555462553690LL;
unsigned int var_14 = 1868195733U;
int zero = 0;
unsigned short var_15 = (unsigned short)47639;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1387771911U;
long long int var_18 = -2595945124156291826LL;
long long int var_19 = -4451445012064749639LL;
unsigned short var_20 = (unsigned short)30516;
long long int var_21 = -1237256379442043343LL;
long long int var_22 = 8898054579214462951LL;
long long int arr_12 [13] ;
long long int arr_13 [13] [13] ;
_Bool arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -3179725911897582156LL : -1710641288039684118LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 1225865176774085547LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
