#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
unsigned short var_1 = (unsigned short)35790;
unsigned int var_2 = 4030270432U;
int var_3 = 1754656720;
int var_8 = 1627454751;
signed char var_9 = (signed char)-68;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-88;
unsigned short var_15 = (unsigned short)56801;
int var_16 = 1094077953;
unsigned long long int var_17 = 10679570432694527390ULL;
short var_18 = (short)24528;
signed char var_19 = (signed char)18;
int arr_0 [12] [12] ;
int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -1166713183 : 580320205;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 262810842;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
