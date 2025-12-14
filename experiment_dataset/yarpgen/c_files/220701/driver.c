#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned int var_5 = 3791756617U;
unsigned char var_6 = (unsigned char)20;
unsigned short var_7 = (unsigned short)49541;
unsigned short var_9 = (unsigned short)7029;
int var_11 = -728486911;
unsigned int var_12 = 629253300U;
unsigned short var_13 = (unsigned short)36659;
unsigned int var_14 = 494526236U;
int zero = 0;
long long int var_15 = 6114285905227008239LL;
int var_16 = 1937744369;
unsigned long long int var_17 = 5595716806996752428ULL;
signed char var_18 = (signed char)61;
unsigned long long int var_19 = 7156202365012852760ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)50;
unsigned char var_22 = (unsigned char)210;
_Bool var_23 = (_Bool)1;
long long int arr_1 [14] ;
_Bool arr_2 [13] ;
unsigned long long int arr_12 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8871877875971241452LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 7894000388729813260ULL;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
