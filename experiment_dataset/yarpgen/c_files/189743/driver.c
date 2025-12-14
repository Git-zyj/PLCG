#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned int var_2 = 4220823045U;
signed char var_6 = (signed char)11;
signed char var_8 = (signed char)-83;
unsigned long long int var_9 = 17698111888732307293ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)53867;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 265985146U;
unsigned char arr_0 [21] ;
unsigned char arr_1 [21] ;
signed char arr_4 [21] ;
long long int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4859803341573003558LL : 8495399869895174533LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
