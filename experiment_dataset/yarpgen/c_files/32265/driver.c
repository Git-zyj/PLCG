#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4688;
int var_1 = 610542360;
unsigned short var_2 = (unsigned short)46564;
long long int var_5 = 5304278005440167803LL;
unsigned short var_7 = (unsigned short)50858;
unsigned char var_8 = (unsigned char)159;
long long int var_9 = -2804494315248404377LL;
unsigned char var_10 = (unsigned char)26;
int zero = 0;
unsigned int var_11 = 2445676754U;
unsigned char var_12 = (unsigned char)181;
unsigned char var_13 = (unsigned char)234;
unsigned char var_14 = (unsigned char)155;
unsigned int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3148317978U : 1232186256U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5223734180989614452ULL : 4113398353991123525ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -7500406871272573044LL : -6844887834073946073LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
