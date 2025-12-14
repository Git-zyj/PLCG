#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5880406116857606721ULL;
int var_3 = 624824064;
unsigned char var_4 = (unsigned char)101;
unsigned long long int var_5 = 9690980148671970822ULL;
short var_7 = (short)24819;
int var_8 = 699208090;
short var_9 = (short)-30959;
unsigned long long int var_10 = 13500909648281233956ULL;
unsigned long long int var_12 = 5686465847376662992ULL;
int zero = 0;
int var_13 = -1791305696;
unsigned char var_14 = (unsigned char)89;
short var_15 = (short)23970;
unsigned long long int var_16 = 5985637108436763290ULL;
unsigned char var_17 = (unsigned char)16;
int var_18 = 315780327;
short var_19 = (short)-3762;
unsigned long long int var_20 = 10775623620280171093ULL;
unsigned char var_21 = (unsigned char)139;
short arr_8 [20] ;
unsigned long long int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)7448;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 17316992471373987019ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
