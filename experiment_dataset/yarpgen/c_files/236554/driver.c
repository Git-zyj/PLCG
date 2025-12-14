#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
unsigned char var_4 = (unsigned char)209;
unsigned int var_5 = 860678551U;
long long int var_6 = -2711251065676812614LL;
unsigned int var_7 = 919609088U;
unsigned char var_8 = (unsigned char)139;
unsigned char var_9 = (unsigned char)217;
unsigned int var_10 = 1916846245U;
long long int var_12 = 5187850308985036089LL;
int zero = 0;
unsigned char var_13 = (unsigned char)186;
unsigned short var_14 = (unsigned short)37961;
unsigned char var_15 = (unsigned char)25;
long long int var_16 = 677278478867365207LL;
unsigned int var_17 = 314084680U;
unsigned int var_18 = 225197796U;
unsigned int var_19 = 1546395585U;
signed char arr_0 [11] ;
int arr_1 [11] ;
short arr_2 [11] ;
unsigned char arr_3 [11] [11] ;
unsigned char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-8 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1867576543 : 813339241;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)22697 : (short)7884;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned char)243;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
