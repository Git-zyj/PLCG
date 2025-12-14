#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58732;
unsigned char var_1 = (unsigned char)14;
signed char var_2 = (signed char)-64;
unsigned short var_4 = (unsigned short)5614;
unsigned short var_6 = (unsigned short)41372;
long long int var_7 = -5664312066464627711LL;
unsigned char var_8 = (unsigned char)158;
unsigned long long int var_9 = 1538027001082375463ULL;
unsigned char var_10 = (unsigned char)3;
short var_11 = (short)28523;
int var_12 = 685723741;
int zero = 0;
unsigned char var_13 = (unsigned char)96;
unsigned char var_14 = (unsigned char)140;
short var_15 = (short)-19165;
unsigned long long int var_16 = 1416307901099822742ULL;
unsigned char var_17 = (unsigned char)141;
long long int var_18 = -7211089458052701094LL;
signed char var_19 = (signed char)33;
unsigned char var_20 = (unsigned char)14;
unsigned char var_21 = (unsigned char)38;
signed char arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-47;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
