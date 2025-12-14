#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)204;
int var_12 = 898505906;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1501117648U;
short var_17 = (short)-4749;
int var_18 = -2018725045;
unsigned long long int var_19 = 40637255865210366ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3269170010408755209LL;
unsigned char arr_2 [21] ;
unsigned long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 302399454215247553ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
