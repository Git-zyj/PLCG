#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28756;
unsigned int var_4 = 3019205568U;
unsigned short var_5 = (unsigned short)14764;
unsigned short var_6 = (unsigned short)33545;
unsigned short var_9 = (unsigned short)41642;
short var_10 = (short)14604;
unsigned long long int var_11 = 17540877109054228369ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2371263516U;
unsigned char var_18 = (unsigned char)143;
unsigned char var_19 = (unsigned char)114;
int zero = 0;
unsigned int var_20 = 2361781051U;
unsigned short var_21 = (unsigned short)54702;
unsigned int var_22 = 1123422152U;
unsigned char var_23 = (unsigned char)15;
short var_24 = (short)15697;
unsigned int var_25 = 3290335670U;
int arr_1 [13] [13] ;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -215766042;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -348135980;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
