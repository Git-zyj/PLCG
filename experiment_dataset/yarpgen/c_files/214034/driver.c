#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50081;
unsigned char var_1 = (unsigned char)170;
unsigned short var_3 = (unsigned short)59660;
unsigned long long int var_4 = 10331123715598754906ULL;
unsigned short var_5 = (unsigned short)46815;
int var_6 = -1988351574;
unsigned long long int var_7 = 12712168945192013319ULL;
unsigned char var_8 = (unsigned char)157;
unsigned int var_12 = 4123412022U;
unsigned short var_13 = (unsigned short)63282;
int zero = 0;
signed char var_15 = (signed char)-90;
unsigned char var_16 = (unsigned char)23;
signed char var_17 = (signed char)-44;
unsigned short var_18 = (unsigned short)60224;
unsigned int var_19 = 1376887020U;
short var_20 = (short)-30745;
short var_21 = (short)10463;
unsigned short arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned char arr_5 [22] [22] ;
unsigned int arr_6 [22] [22] ;
signed char arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60110 : (unsigned short)4070;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2958 : (unsigned short)61235;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 908614759U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)53 : (signed char)-57;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
