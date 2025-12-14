#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8324261572577023640LL;
unsigned int var_5 = 3263248199U;
unsigned int var_10 = 1176478862U;
int zero = 0;
short var_16 = (short)3249;
unsigned int var_17 = 21522202U;
int var_18 = -1577820322;
unsigned char var_19 = (unsigned char)12;
unsigned long long int var_20 = 8125625913979081737ULL;
unsigned short arr_0 [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)55039;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-70;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
