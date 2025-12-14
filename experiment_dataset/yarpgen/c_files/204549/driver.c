#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1361472921;
signed char var_8 = (signed char)-77;
unsigned long long int var_10 = 10865306650933354411ULL;
short var_11 = (short)11543;
int var_12 = 1141266167;
int zero = 0;
unsigned short var_14 = (unsigned short)65467;
short var_15 = (short)-12169;
unsigned short var_16 = (unsigned short)895;
int var_17 = 1811625225;
unsigned int var_18 = 1411109430U;
signed char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)93;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
