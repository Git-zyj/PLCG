#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_6 = (short)1815;
short var_7 = (short)481;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-29690;
unsigned int var_15 = 2430492922U;
int zero = 0;
unsigned long long int var_18 = 13434893122663458323ULL;
unsigned char var_19 = (unsigned char)28;
short var_20 = (short)-26734;
unsigned short var_21 = (unsigned short)45287;
int var_22 = 1833573128;
long long int var_23 = 8779235402831974768LL;
short var_24 = (short)-31742;
long long int var_25 = 777060078067908279LL;
unsigned char var_26 = (unsigned char)58;
int var_27 = -675072206;
unsigned char arr_0 [21] [21] ;
unsigned char arr_1 [21] [21] ;
int arr_4 [21] [21] ;
unsigned char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 1666951802;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)227;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
