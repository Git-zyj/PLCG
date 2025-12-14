#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)47716;
long long int var_5 = 7348294028131861020LL;
int var_6 = 322642746;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)55965;
unsigned char var_11 = (unsigned char)204;
int zero = 0;
unsigned long long int var_12 = 5544038365049580449ULL;
unsigned short var_13 = (unsigned short)38055;
unsigned short var_14 = (unsigned short)575;
signed char var_15 = (signed char)114;
unsigned short var_16 = (unsigned short)29456;
unsigned long long int var_17 = 5053627010188110340ULL;
unsigned long long int arr_0 [25] ;
_Bool arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3807609152754030393ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
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
