#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)206;
signed char var_2 = (signed char)73;
int var_3 = 793953850;
unsigned char var_4 = (unsigned char)217;
unsigned short var_6 = (unsigned short)57004;
unsigned long long int var_10 = 10766595025701452912ULL;
unsigned char var_13 = (unsigned char)148;
short var_14 = (short)-30681;
int zero = 0;
short var_15 = (short)14528;
short var_16 = (short)2320;
long long int var_17 = -583839653141065063LL;
unsigned long long int arr_0 [15] ;
short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 17628759178655116877ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)17005;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
