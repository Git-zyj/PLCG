#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21306;
unsigned long long int var_2 = 16776165242959166050ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2606482265U;
short var_7 = (short)26180;
signed char var_9 = (signed char)-25;
int zero = 0;
int var_11 = -1296983731;
int var_12 = -1520451378;
int var_13 = 295604255;
int var_14 = 2055830670;
unsigned long long int var_15 = 12081720664219770370ULL;
unsigned int var_16 = 2744518830U;
unsigned int var_17 = 1486403098U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8829266786631523599LL;
short arr_0 [10] ;
int arr_2 [10] ;
short arr_3 [11] ;
int arr_4 [11] ;
int arr_7 [16] ;
_Bool arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-10699;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1246836133;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-2934;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1433596413;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -255298929 : 1164895334;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
