#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 747271707;
short var_1 = (short)-6943;
short var_4 = (short)27812;
unsigned char var_5 = (unsigned char)11;
unsigned char var_6 = (unsigned char)191;
unsigned int var_8 = 1658297787U;
unsigned long long int var_9 = 14624015540515132789ULL;
unsigned char var_11 = (unsigned char)111;
unsigned int var_13 = 3684154225U;
signed char var_14 = (signed char)-16;
int var_15 = 1588489415;
signed char var_16 = (signed char)-80;
int zero = 0;
unsigned char var_17 = (unsigned char)4;
unsigned char var_18 = (unsigned char)188;
unsigned int var_19 = 4250215974U;
unsigned long long int var_20 = 3383052928129237373ULL;
unsigned char var_21 = (unsigned char)116;
unsigned char var_22 = (unsigned char)201;
unsigned char var_23 = (unsigned char)249;
signed char arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned long long int arr_6 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)61606;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10431386762805769510ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)137 : (unsigned char)166;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
