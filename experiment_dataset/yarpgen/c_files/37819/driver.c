#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
long long int var_2 = 3408865021051674001LL;
unsigned short var_3 = (unsigned short)53443;
unsigned int var_4 = 3867433463U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)93;
long long int var_7 = -5447349174909999567LL;
int zero = 0;
unsigned int var_10 = 2116755190U;
long long int var_11 = -4417558973677420237LL;
unsigned short var_12 = (unsigned short)49990;
long long int var_13 = -8356796715176906230LL;
unsigned long long int arr_1 [10] ;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 4203937300279397462ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)100;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
