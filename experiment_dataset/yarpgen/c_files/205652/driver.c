#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1847314001654951744LL;
unsigned int var_3 = 2888917732U;
unsigned int var_4 = 4206254385U;
int var_9 = -1585541333;
int var_12 = 2125719599;
long long int var_15 = 3260890541841308562LL;
int zero = 0;
long long int var_16 = -8350803768682369805LL;
unsigned short var_17 = (unsigned short)26424;
unsigned short var_18 = (unsigned short)47067;
signed char var_19 = (signed char)93;
unsigned int var_20 = 4268162038U;
long long int var_21 = -4585700082609898299LL;
long long int var_22 = 5249260131599901778LL;
unsigned int arr_1 [25] ;
int arr_5 [19] ;
signed char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2730085024U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1485149573 : 1483046854;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)-39;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
