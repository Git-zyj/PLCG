#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-78;
unsigned int var_11 = 837250322U;
signed char var_15 = (signed char)-107;
unsigned int var_16 = 1156959407U;
unsigned int var_17 = 1774689U;
signed char var_18 = (signed char)76;
int zero = 0;
unsigned int var_20 = 2589780842U;
unsigned int var_21 = 982609757U;
unsigned short var_22 = (unsigned short)51461;
int var_23 = -1572147603;
unsigned int var_24 = 3447863651U;
unsigned short arr_2 [16] ;
int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)33489;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 317957561;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
