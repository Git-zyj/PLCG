#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 926412511814163191ULL;
unsigned short var_1 = (unsigned short)19574;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)114;
signed char var_5 = (signed char)29;
unsigned short var_6 = (unsigned short)45871;
int var_8 = -696040096;
signed char var_9 = (signed char)43;
short var_10 = (short)-15122;
unsigned short var_12 = (unsigned short)22881;
long long int var_13 = 5752362291657190616LL;
int zero = 0;
unsigned short var_16 = (unsigned short)64886;
unsigned char var_17 = (unsigned char)177;
int var_18 = -875174066;
_Bool var_19 = (_Bool)0;
long long int arr_0 [16] ;
unsigned char arr_5 [16] ;
signed char arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -8944298619468750089LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)43;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
