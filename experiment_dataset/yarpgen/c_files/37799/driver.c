#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
unsigned char var_1 = (unsigned char)168;
long long int var_2 = -4401609383119991460LL;
unsigned short var_3 = (unsigned short)14077;
signed char var_4 = (signed char)13;
short var_5 = (short)25722;
unsigned short var_7 = (unsigned short)23227;
long long int var_8 = 5918504656493076075LL;
int zero = 0;
unsigned short var_12 = (unsigned short)52736;
unsigned short var_13 = (unsigned short)19537;
long long int var_14 = -2600341158778793712LL;
unsigned short var_15 = (unsigned short)53644;
unsigned short var_16 = (unsigned short)28254;
long long int arr_0 [14] ;
unsigned short arr_3 [14] ;
short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 4997741009774746122LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)32953;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)5533;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
