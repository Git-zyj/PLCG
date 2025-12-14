#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11712;
unsigned int var_5 = 266860510U;
signed char var_6 = (signed char)-57;
unsigned short var_7 = (unsigned short)42844;
unsigned int var_8 = 1459903466U;
unsigned int var_10 = 3205071707U;
unsigned int var_14 = 2213103545U;
int zero = 0;
unsigned long long int var_15 = 10281105335955674589ULL;
signed char var_16 = (signed char)95;
unsigned short var_17 = (unsigned short)8533;
unsigned short var_18 = (unsigned short)45694;
unsigned char var_19 = (unsigned char)145;
unsigned char var_20 = (unsigned char)14;
unsigned int arr_0 [12] ;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2820322823U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)95;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
