#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14713;
unsigned char var_3 = (unsigned char)152;
unsigned int var_4 = 1110191838U;
short var_5 = (short)16921;
signed char var_7 = (signed char)-13;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 237601006813742983ULL;
int zero = 0;
signed char var_12 = (signed char)124;
int var_13 = 990940910;
short var_14 = (short)-14157;
unsigned short var_15 = (unsigned short)37441;
short var_16 = (short)-9099;
unsigned int var_17 = 4093838573U;
_Bool arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
