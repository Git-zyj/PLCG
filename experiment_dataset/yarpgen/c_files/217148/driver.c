#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1804856106;
int var_11 = -179470043;
int zero = 0;
int var_13 = 1532952728;
unsigned short var_14 = (unsigned short)47764;
int var_15 = 1197716070;
unsigned char var_16 = (unsigned char)15;
short var_17 = (short)-13287;
unsigned short var_18 = (unsigned short)20689;
short var_19 = (short)-5703;
unsigned long long int var_20 = 12884939851498110356ULL;
unsigned int var_21 = 1455568924U;
signed char var_22 = (signed char)25;
int var_23 = 409984083;
unsigned int arr_1 [14] ;
short arr_2 [14] ;
unsigned char arr_8 [13] ;
unsigned long long int arr_3 [14] ;
int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 283721178U : 2977842138U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)6401;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3183903692853465772ULL : 10225734472588295270ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 213558777 : -65849221;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
