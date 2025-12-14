#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3656316885U;
int var_2 = 619423393;
signed char var_4 = (signed char)-67;
int var_5 = 2004027883;
int var_7 = 1216737629;
unsigned char var_8 = (unsigned char)110;
int var_9 = -543534705;
int zero = 0;
unsigned long long int var_10 = 6020256260367007180ULL;
unsigned short var_11 = (unsigned short)49085;
unsigned char var_12 = (unsigned char)21;
unsigned char var_13 = (unsigned char)141;
unsigned char var_14 = (unsigned char)216;
_Bool arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
