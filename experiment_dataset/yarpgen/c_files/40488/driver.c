#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)229;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-23579;
unsigned long long int var_9 = 12887641872241670073ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)35923;
unsigned short var_13 = (unsigned short)44017;
signed char var_14 = (signed char)3;
unsigned long long int var_15 = 8911869453401698201ULL;
int var_16 = 613901101;
int var_17 = 1406019522;
unsigned char arr_0 [13] ;
long long int arr_1 [13] ;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 134122660983240381LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1969588832;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
