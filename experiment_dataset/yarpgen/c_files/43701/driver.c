#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)96;
unsigned long long int var_3 = 14649702774959882767ULL;
short var_4 = (short)-750;
unsigned long long int var_8 = 9443031269851273649ULL;
unsigned long long int var_11 = 18034854937638725020ULL;
unsigned short var_13 = (unsigned short)1053;
int zero = 0;
signed char var_15 = (signed char)-117;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-51;
_Bool var_18 = (_Bool)0;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 777661516 : -2017060360;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
