#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2036284545;
int var_7 = -70876262;
unsigned char var_9 = (unsigned char)164;
unsigned long long int var_12 = 342130254819646822ULL;
unsigned int var_13 = 3255185509U;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)20402;
int zero = 0;
unsigned int var_19 = 3460989593U;
short var_20 = (short)28102;
unsigned int var_21 = 1364510156U;
int var_22 = -1558584988;
signed char var_23 = (signed char)45;
short var_24 = (short)-21643;
_Bool arr_3 [13] [13] ;
int arr_8 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 623171824;
}

void checksum() {
    hash(&seed, var_19);
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
