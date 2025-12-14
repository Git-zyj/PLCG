#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5868922080816012896LL;
signed char var_2 = (signed char)0;
long long int var_3 = -4144228255878790655LL;
short var_4 = (short)-3548;
int var_5 = 165651279;
long long int var_6 = -3965335215564331617LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-22073;
signed char var_9 = (signed char)119;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)35326;
int var_12 = 879652886;
int zero = 0;
unsigned short var_13 = (unsigned short)38903;
unsigned int var_14 = 3827345430U;
long long int var_15 = -1732964282387922652LL;
unsigned short var_16 = (unsigned short)9038;
unsigned char var_17 = (unsigned char)247;
long long int var_18 = -8091274100130401009LL;
unsigned int var_19 = 2815700585U;
long long int var_20 = 4376194838663218093LL;
unsigned short var_21 = (unsigned short)52519;
signed char arr_0 [21] ;
short arr_1 [21] ;
int arr_2 [21] [21] ;
int arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-15215;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1053985248;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1981278132;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
