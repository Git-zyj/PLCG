#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5746029685925164305LL;
unsigned short var_8 = (unsigned short)33801;
unsigned long long int var_9 = 7343074429558758239ULL;
unsigned short var_12 = (unsigned short)33973;
unsigned char var_14 = (unsigned char)201;
long long int var_16 = 973956815285280784LL;
unsigned short var_17 = (unsigned short)4588;
int zero = 0;
unsigned int var_18 = 1786267125U;
short var_19 = (short)4362;
unsigned long long int var_20 = 16937191494951448802ULL;
signed char var_21 = (signed char)-24;
unsigned short var_22 = (unsigned short)25459;
_Bool arr_0 [16] ;
long long int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 4135416193619838454LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
