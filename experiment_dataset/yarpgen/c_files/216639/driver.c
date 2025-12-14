#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
unsigned int var_3 = 2307256700U;
unsigned short var_5 = (unsigned short)25754;
unsigned long long int var_7 = 12026340338048703648ULL;
unsigned int var_8 = 4005177868U;
unsigned char var_9 = (unsigned char)93;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)40745;
signed char var_12 = (signed char)70;
unsigned int var_13 = 2368655393U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-91;
unsigned char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)66;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
