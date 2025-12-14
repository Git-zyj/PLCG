#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -1526480666;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14180849234091581786ULL;
short var_8 = (short)7958;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 7480060853519204920ULL;
unsigned int var_11 = 2079573079U;
int zero = 0;
unsigned char var_12 = (unsigned char)75;
unsigned long long int var_13 = 11136171806214330711ULL;
unsigned short var_14 = (unsigned short)25512;
unsigned int var_15 = 2879836122U;
signed char var_16 = (signed char)48;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)58;
unsigned long long int var_19 = 3023747130835621377ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8876316892059561994LL;
signed char var_22 = (signed char)127;
long long int var_23 = -4886788692425143848LL;
int arr_0 [20] ;
short arr_1 [20] ;
int arr_2 [20] ;
unsigned short arr_4 [20] ;
unsigned short arr_6 [20] ;
short arr_7 [20] [20] ;
signed char arr_8 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 992917433;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-14173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -589143598;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23606 : (unsigned short)24832;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)39266;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-23510;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-18;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
