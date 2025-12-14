#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
short var_3 = (short)25952;
int var_4 = 1728118716;
long long int var_5 = -6654579577768153260LL;
long long int var_6 = -3034997509554772749LL;
long long int var_7 = -7483112093634003389LL;
long long int var_8 = -7063935304976207201LL;
int var_12 = 430290316;
short var_14 = (short)29084;
int zero = 0;
unsigned short var_16 = (unsigned short)58245;
unsigned int var_17 = 3515971495U;
unsigned char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)153 : (unsigned char)118;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
