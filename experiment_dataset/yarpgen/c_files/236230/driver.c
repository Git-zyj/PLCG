#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1828997253;
unsigned short var_3 = (unsigned short)13372;
signed char var_4 = (signed char)106;
unsigned long long int var_5 = 15696906793610904271ULL;
unsigned short var_6 = (unsigned short)58728;
_Bool var_8 = (_Bool)0;
short var_9 = (short)7802;
unsigned long long int var_14 = 17513889253520242995ULL;
_Bool var_15 = (_Bool)1;
short var_17 = (short)19985;
unsigned char var_19 = (unsigned char)3;
int zero = 0;
unsigned char var_20 = (unsigned char)46;
signed char var_21 = (signed char)26;
unsigned long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 17815665018061188599ULL : 9708847936907476260ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
