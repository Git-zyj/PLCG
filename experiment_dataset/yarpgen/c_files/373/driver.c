#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2213307934733955937LL;
unsigned long long int var_3 = 17428862074911984326ULL;
long long int var_4 = 7088933913134101676LL;
unsigned char var_7 = (unsigned char)81;
long long int var_8 = 527260237199943190LL;
unsigned int var_10 = 86926083U;
unsigned short var_11 = (unsigned short)41605;
int zero = 0;
long long int var_12 = -5659853221924436060LL;
unsigned short var_13 = (unsigned short)28915;
unsigned int var_14 = 3234558104U;
unsigned char var_15 = (unsigned char)132;
signed char var_16 = (signed char)-19;
short var_17 = (short)25210;
unsigned long long int var_18 = 14476115886525905325ULL;
long long int var_19 = 4622499900945065290LL;
unsigned char var_20 = (unsigned char)70;
unsigned long long int var_21 = 9069532684802933738ULL;
int var_22 = -2130972888;
unsigned short var_23 = (unsigned short)46758;
signed char var_24 = (signed char)-115;
_Bool arr_1 [23] ;
unsigned char arr_2 [23] ;
short arr_3 [15] ;
unsigned short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)25501;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)5894;
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
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
