#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 1638020227U;
signed char var_11 = (signed char)26;
int zero = 0;
unsigned int var_13 = 1524215791U;
unsigned long long int var_14 = 15983873115374643393ULL;
unsigned long long int var_15 = 11430667075962580971ULL;
signed char var_16 = (signed char)-126;
unsigned long long int var_17 = 5984161846392710966ULL;
unsigned long long int var_18 = 5409256002969306977ULL;
unsigned short arr_0 [21] ;
short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)29963;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)18166;
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
