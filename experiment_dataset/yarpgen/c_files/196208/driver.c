#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1339456335;
unsigned char var_2 = (unsigned char)45;
_Bool var_3 = (_Bool)1;
long long int var_4 = 3411316110748725162LL;
unsigned long long int var_5 = 737075143665262945ULL;
unsigned int var_6 = 107093513U;
long long int var_7 = -7387016775578779006LL;
unsigned short var_9 = (unsigned short)25090;
short var_10 = (short)-9533;
signed char var_11 = (signed char)-51;
int var_13 = 262284683;
unsigned char var_17 = (unsigned char)12;
signed char var_18 = (signed char)19;
int zero = 0;
short var_20 = (short)22412;
short var_21 = (short)30699;
unsigned long long int var_22 = 14292823784815501983ULL;
unsigned char var_23 = (unsigned char)203;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_0 [23] ;
signed char arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 12896420080897454986ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-86;
}

void checksum() {
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
