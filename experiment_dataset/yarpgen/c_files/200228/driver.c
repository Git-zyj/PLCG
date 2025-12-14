#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -454475836;
long long int var_3 = -9122614315596295905LL;
unsigned short var_4 = (unsigned short)17139;
signed char var_5 = (signed char)-15;
short var_6 = (short)31628;
unsigned int var_7 = 1770277172U;
int var_8 = 177926058;
unsigned long long int var_9 = 14837536049780559465ULL;
short var_11 = (short)17102;
int zero = 0;
int var_12 = 900730664;
unsigned int var_13 = 2758335271U;
short var_14 = (short)-4897;
int var_15 = -1076264215;
unsigned char var_16 = (unsigned char)13;
unsigned int var_17 = 892810281U;
short var_18 = (short)32200;
unsigned short var_19 = (unsigned short)37453;
unsigned int var_20 = 757152713U;
int var_21 = 520938294;
signed char var_22 = (signed char)-91;
unsigned char var_23 = (unsigned char)173;
short var_24 = (short)-2277;
unsigned char var_25 = (unsigned char)14;
unsigned short var_26 = (unsigned short)58073;
short var_27 = (short)-14424;
unsigned char arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned char arr_4 [22] ;
int arr_5 [22] ;
unsigned int arr_9 [22] [22] ;
unsigned int arr_17 [22] [22] ;
int arr_19 [22] ;
unsigned char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)20495;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 311015911;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 1721280651U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = 2106777673U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 804705425;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)95;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
