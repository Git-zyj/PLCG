#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3345166881U;
long long int var_3 = 7967313120954969231LL;
unsigned short var_9 = (unsigned short)22991;
signed char var_13 = (signed char)-121;
int var_16 = -2067247402;
int zero = 0;
unsigned int var_17 = 194072719U;
unsigned short var_18 = (unsigned short)21343;
int var_19 = 1236912576;
unsigned short var_20 = (unsigned short)60286;
unsigned char arr_0 [15] ;
short arr_1 [15] ;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-23848 : (short)-30324;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 8131382269871954699LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
