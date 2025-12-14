#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45847;
short var_11 = (short)24132;
short var_13 = (short)17097;
unsigned short var_17 = (unsigned short)21446;
unsigned long long int var_19 = 17426246995428607554ULL;
int zero = 0;
int var_20 = 1239792446;
short var_21 = (short)25139;
short var_22 = (short)21181;
signed char var_23 = (signed char)-51;
short arr_1 [14] ;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-5584;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)14343;
}

void checksum() {
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
