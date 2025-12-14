#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23527;
unsigned int var_1 = 1555813114U;
unsigned char var_2 = (unsigned char)224;
short var_3 = (short)14595;
unsigned int var_4 = 2954952949U;
unsigned int var_5 = 416450151U;
unsigned char var_6 = (unsigned char)206;
unsigned short var_8 = (unsigned short)50025;
unsigned long long int var_9 = 932643744887553287ULL;
unsigned short var_10 = (unsigned short)47382;
int zero = 0;
unsigned int var_11 = 2147994184U;
short var_12 = (short)-18473;
unsigned long long int var_13 = 18436904667724388356ULL;
unsigned long long int var_14 = 13433182187107624706ULL;
unsigned int var_15 = 1661020556U;
unsigned char var_16 = (unsigned char)17;
unsigned short arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned short)29479;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
