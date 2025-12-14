#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)47;
long long int var_7 = -7508626984101284255LL;
unsigned long long int var_10 = 896055213350760570ULL;
signed char var_11 = (signed char)108;
int var_14 = 642043862;
unsigned long long int var_15 = 16347895134837484181ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)51;
unsigned short var_17 = (unsigned short)3495;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)16360;
unsigned char var_20 = (unsigned char)254;
unsigned short arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)31910;
}

void checksum() {
    hash(&seed, var_16);
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
