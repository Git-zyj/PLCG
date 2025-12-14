#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned long long int var_3 = 8627986103086147517ULL;
unsigned short var_7 = (unsigned short)12738;
signed char var_9 = (signed char)1;
int var_10 = -357543519;
unsigned int var_11 = 432894908U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-4159;
unsigned short var_15 = (unsigned short)63314;
signed char var_16 = (signed char)-6;
int zero = 0;
unsigned short var_17 = (unsigned short)6351;
unsigned short var_18 = (unsigned short)47539;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)34;
_Bool var_21 = (_Bool)0;
short var_22 = (short)6649;
int var_23 = -2119167786;
signed char arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)79;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
