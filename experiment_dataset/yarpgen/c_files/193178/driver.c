#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1714842509U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3366902115935125761ULL;
unsigned long long int var_7 = 6650121695493485889ULL;
unsigned long long int var_8 = 6660532054688194323ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)59425;
signed char var_13 = (signed char)-107;
signed char var_14 = (signed char)-83;
unsigned int arr_0 [14] [14] ;
short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 2991107475U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-15029;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
