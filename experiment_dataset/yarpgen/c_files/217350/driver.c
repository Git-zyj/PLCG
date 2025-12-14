#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned int var_1 = 66200593U;
_Bool var_2 = (_Bool)0;
long long int var_4 = -7385568806747845643LL;
_Bool var_5 = (_Bool)1;
int var_6 = 1964551726;
unsigned short var_7 = (unsigned short)11591;
unsigned long long int var_8 = 15729181847003088507ULL;
int var_9 = 747616571;
signed char var_11 = (signed char)-40;
long long int var_12 = -6708888717441469924LL;
int var_13 = -1845548638;
int zero = 0;
long long int var_14 = -2764799574488199436LL;
unsigned long long int var_15 = 8633082213706851662ULL;
int var_16 = 206686640;
long long int var_17 = 3154374215031140901LL;
long long int var_18 = 6518435255723833384LL;
signed char var_19 = (signed char)-72;
int var_20 = 1983376078;
short var_21 = (short)17570;
unsigned char arr_2 [12] ;
int arr_3 [12] ;
long long int arr_5 [12] ;
unsigned long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 685756883;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 7483670808052355896LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 16013174527735808636ULL;
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
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
