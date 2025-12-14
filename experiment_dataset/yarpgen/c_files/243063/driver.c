#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)-8629;
unsigned long long int var_5 = 7865481804950241704ULL;
short var_6 = (short)-13717;
short var_8 = (short)-13787;
int zero = 0;
unsigned long long int var_10 = 13673391186099535658ULL;
long long int var_11 = 4934052110068821896LL;
unsigned long long int var_12 = 10845143503966915017ULL;
unsigned long long int var_13 = 15519592841344216194ULL;
unsigned short var_14 = (unsigned short)50384;
_Bool var_15 = (_Bool)1;
int arr_2 [19] ;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1123399680;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)7414;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
