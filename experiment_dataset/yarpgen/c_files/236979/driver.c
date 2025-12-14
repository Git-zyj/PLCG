#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2117424495;
unsigned long long int var_4 = 4208119882815243404ULL;
signed char var_5 = (signed char)-25;
unsigned char var_6 = (unsigned char)127;
long long int var_7 = -3118028032398734877LL;
long long int var_8 = -6137671548220341811LL;
unsigned char var_9 = (unsigned char)197;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
signed char var_11 = (signed char)45;
_Bool var_12 = (_Bool)0;
int var_13 = -88805283;
unsigned long long int var_14 = 3128097405321373197ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)31529;
short var_17 = (short)15395;
_Bool arr_0 [12] ;
short arr_2 [12] ;
int arr_7 [12] ;
signed char arr_8 [12] [12] ;
signed char arr_5 [12] ;
unsigned short arr_6 [12] ;
signed char arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-16492;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 23586818 : 2019045957;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-22 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)24376;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)125;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
