#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
int var_2 = 1729301490;
unsigned long long int var_4 = 14356971047698580987ULL;
unsigned char var_6 = (unsigned char)148;
unsigned char var_8 = (unsigned char)75;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2001155010U;
unsigned short var_13 = (unsigned short)26273;
unsigned int var_18 = 3770053831U;
unsigned char var_19 = (unsigned char)248;
int zero = 0;
unsigned int var_20 = 2898496947U;
unsigned char var_21 = (unsigned char)6;
long long int var_22 = 6014971294804697037LL;
unsigned short var_23 = (unsigned short)45628;
int var_24 = -1531873160;
unsigned int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 4097926137U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
