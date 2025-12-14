#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5946855508875583303ULL;
int var_4 = -2062177386;
long long int var_8 = 5241805066027886453LL;
unsigned short var_12 = (unsigned short)40842;
int zero = 0;
short var_13 = (short)12786;
unsigned int var_14 = 3964215393U;
unsigned int var_15 = 3855379814U;
short var_16 = (short)30844;
int var_17 = 1938188563;
short var_18 = (short)-8657;
unsigned int arr_4 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 3764373401U;
}

void checksum() {
    hash(&seed, var_13);
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
