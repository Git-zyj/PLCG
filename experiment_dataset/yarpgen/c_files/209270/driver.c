#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -118384022;
unsigned short var_9 = (unsigned short)51059;
int var_10 = -272162878;
_Bool var_11 = (_Bool)1;
int var_12 = -1445183966;
unsigned int var_13 = 990746369U;
unsigned char var_14 = (unsigned char)231;
unsigned char var_15 = (unsigned char)80;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)29;
short var_19 = (short)3693;
int var_20 = -1635147806;
unsigned short var_21 = (unsigned short)6661;
unsigned char var_22 = (unsigned char)129;
_Bool var_23 = (_Bool)0;
int arr_0 [25] ;
unsigned char arr_2 [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -613736827 : 1174130024;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)222 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)103 : (signed char)-33;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
