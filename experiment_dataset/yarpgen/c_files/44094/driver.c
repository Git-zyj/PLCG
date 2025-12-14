#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-50;
unsigned int var_3 = 1222529469U;
short var_4 = (short)22889;
short var_5 = (short)25076;
unsigned int var_11 = 2725651083U;
int zero = 0;
signed char var_13 = (signed char)-50;
unsigned int var_14 = 1760382336U;
int var_15 = 299760859;
unsigned int var_16 = 972652709U;
signed char var_17 = (signed char)1;
short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)7177;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
