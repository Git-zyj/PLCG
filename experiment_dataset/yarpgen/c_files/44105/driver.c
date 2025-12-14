#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 3888719684U;
unsigned int var_8 = 1141963451U;
int zero = 0;
short var_15 = (short)-29162;
unsigned int var_16 = 57699522U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)12597;
unsigned char var_19 = (unsigned char)232;
long long int var_20 = -5533726337722002015LL;
unsigned short var_21 = (unsigned short)8977;
int arr_3 [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -1445372328;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)29263;
}

void checksum() {
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
