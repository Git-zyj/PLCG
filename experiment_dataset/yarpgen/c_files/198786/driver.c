#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
int var_1 = -562748099;
long long int var_3 = 3471050910895411760LL;
unsigned char var_4 = (unsigned char)137;
unsigned short var_6 = (unsigned short)5640;
unsigned long long int var_8 = 9493250272147384621ULL;
signed char var_9 = (signed char)1;
long long int var_11 = 7188394435753001274LL;
unsigned short var_12 = (unsigned short)51488;
long long int var_13 = -4912252579857138261LL;
int zero = 0;
long long int var_14 = -258327313924418762LL;
unsigned long long int var_15 = 17554926939266009956ULL;
int var_16 = -492325445;
unsigned int var_17 = 2769194423U;
unsigned long long int var_18 = 15420499305645812134ULL;
long long int var_19 = -5698262978274862258LL;
unsigned int var_20 = 2264593966U;
unsigned long long int var_21 = 5454233920071645491ULL;
unsigned long long int arr_15 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 1446833808068338790ULL : 17346029297683436803ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
