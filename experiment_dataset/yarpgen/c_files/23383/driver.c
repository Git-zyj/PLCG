#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 10162688153586629004ULL;
unsigned long long int var_8 = 17428509130027265776ULL;
int var_9 = -303504682;
unsigned int var_11 = 4175799909U;
signed char var_12 = (signed char)61;
int zero = 0;
short var_13 = (short)6938;
short var_14 = (short)9917;
signed char var_15 = (signed char)121;
unsigned short var_16 = (unsigned short)49970;
short var_17 = (short)-15364;
unsigned int arr_0 [14] ;
int arr_1 [14] ;
signed char arr_2 [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3053535135U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 51025279;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1033413319;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
