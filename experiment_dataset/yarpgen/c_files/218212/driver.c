#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5515;
int var_4 = -1400512298;
unsigned int var_7 = 3457107123U;
long long int var_9 = -731235754383372367LL;
long long int var_10 = -8895662357709727866LL;
signed char var_13 = (signed char)-88;
unsigned char var_15 = (unsigned char)104;
unsigned short var_16 = (unsigned short)43858;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
short var_21 = (short)17434;
unsigned int var_22 = 3325533041U;
unsigned short var_23 = (unsigned short)19912;
int var_24 = -1550661168;
long long int var_25 = 7674699664636485203LL;
long long int var_26 = 2591531459474568305LL;
unsigned short var_27 = (unsigned short)63685;
unsigned short var_28 = (unsigned short)9094;
int var_29 = -2087205712;
long long int var_30 = -4426902298921012603LL;
unsigned int var_31 = 320355667U;
long long int var_32 = 7371503007386493260LL;
long long int var_33 = -5568774003275338568LL;
long long int arr_0 [21] ;
unsigned int arr_2 [21] ;
unsigned char arr_3 [25] ;
long long int arr_6 [25] [25] ;
signed char arr_12 [10] ;
unsigned short arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -247725260455453347LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 450599995U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = -6537706190544563562LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)2334;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
