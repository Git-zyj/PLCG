#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5492637470712518673LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2233338934U;
short var_4 = (short)-24757;
unsigned char var_5 = (unsigned char)22;
short var_6 = (short)-17742;
int var_8 = 456304666;
short var_9 = (short)-3862;
int zero = 0;
int var_11 = 554501778;
unsigned char var_12 = (unsigned char)62;
unsigned long long int var_13 = 4615913176089865360ULL;
unsigned int var_14 = 1711613190U;
short var_15 = (short)-14098;
unsigned int var_16 = 2809365375U;
short var_17 = (short)-31904;
unsigned char arr_0 [24] ;
int arr_1 [24] ;
short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -637243281;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11971 : (short)-16176;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
