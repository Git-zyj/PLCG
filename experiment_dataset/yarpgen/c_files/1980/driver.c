#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1442967695;
unsigned char var_1 = (unsigned char)100;
unsigned long long int var_3 = 1110188251316994208ULL;
unsigned short var_5 = (unsigned short)28921;
int var_7 = -1824727382;
long long int var_8 = -845992775961397311LL;
short var_10 = (short)14992;
int zero = 0;
unsigned long long int var_11 = 17966477949974105774ULL;
int var_12 = -670078552;
int var_13 = 619490812;
int var_14 = 462896290;
signed char var_15 = (signed char)-79;
unsigned char var_16 = (unsigned char)175;
int var_17 = -2124989194;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4220753788U;
unsigned short var_20 = (unsigned short)62526;
signed char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
