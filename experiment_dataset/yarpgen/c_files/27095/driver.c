#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11697;
unsigned char var_1 = (unsigned char)23;
long long int var_4 = -6536271955810911330LL;
unsigned int var_5 = 2815014400U;
unsigned short var_6 = (unsigned short)58914;
unsigned int var_7 = 1177523269U;
unsigned char var_8 = (unsigned char)198;
unsigned short var_10 = (unsigned short)41264;
unsigned short var_11 = (unsigned short)30534;
int zero = 0;
unsigned long long int var_12 = 8274145953087498518ULL;
signed char var_13 = (signed char)-98;
unsigned long long int var_14 = 9229770060577844200ULL;
long long int var_15 = 830463085009204387LL;
unsigned char var_16 = (unsigned char)5;
unsigned int arr_5 [25] ;
int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3392033231U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1341937616;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
