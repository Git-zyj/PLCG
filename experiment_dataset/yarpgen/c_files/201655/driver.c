#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52408;
int var_1 = -1004145495;
unsigned int var_4 = 341298187U;
unsigned char var_5 = (unsigned char)68;
int var_6 = -1069754614;
signed char var_7 = (signed char)91;
unsigned char var_9 = (unsigned char)242;
unsigned int var_10 = 1605675979U;
signed char var_11 = (signed char)7;
int zero = 0;
int var_13 = -50996085;
unsigned int var_14 = 783609099U;
unsigned char var_15 = (unsigned char)142;
unsigned short var_16 = (unsigned short)3440;
long long int var_17 = -9183956426862116177LL;
signed char var_18 = (signed char)-91;
unsigned char var_19 = (unsigned char)53;
unsigned short var_20 = (unsigned short)50929;
unsigned char arr_12 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)41;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
