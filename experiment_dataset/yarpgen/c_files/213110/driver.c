#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1991695290;
unsigned char var_10 = (unsigned char)20;
unsigned char var_11 = (unsigned char)91;
short var_17 = (short)-14218;
int zero = 0;
long long int var_20 = 1848772075929506088LL;
unsigned int var_21 = 834782532U;
long long int var_22 = -4112748778746689054LL;
unsigned char var_23 = (unsigned char)59;
unsigned int var_24 = 3685259567U;
unsigned long long int arr_0 [22] ;
signed char arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
_Bool arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 16612549629493677971ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)72 : (signed char)-108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)44618 : (unsigned short)24745;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
