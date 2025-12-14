#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2077238642U;
unsigned short var_3 = (unsigned short)2937;
int var_5 = 1710703783;
unsigned char var_6 = (unsigned char)34;
signed char var_8 = (signed char)45;
unsigned char var_9 = (unsigned char)228;
unsigned long long int var_10 = 13174395675744848605ULL;
short var_11 = (short)-10101;
unsigned long long int var_12 = 11108811869439405725ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)77;
int var_14 = 1729891640;
unsigned char var_15 = (unsigned char)199;
short var_16 = (short)-30598;
unsigned char var_17 = (unsigned char)72;
unsigned short var_18 = (unsigned short)2807;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3504191514U;
unsigned int var_21 = 147368846U;
signed char var_22 = (signed char)-89;
unsigned long long int var_23 = 10531355843650412ULL;
unsigned char var_24 = (unsigned char)65;
short var_25 = (short)6807;
short var_26 = (short)-13732;
unsigned long long int var_27 = 672192644403798446ULL;
short var_28 = (short)23266;
unsigned short arr_0 [15] ;
short arr_3 [16] ;
unsigned long long int arr_4 [16] ;
signed char arr_5 [19] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)34333;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)15166 : (short)-2525;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 9819300244190883232ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)10315;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
