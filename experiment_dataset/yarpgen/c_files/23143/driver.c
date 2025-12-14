#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)23690;
signed char var_16 = (signed char)-6;
int zero = 0;
unsigned short var_17 = (unsigned short)16884;
long long int var_18 = 427488828852020582LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-14038;
unsigned int var_21 = 3452767323U;
unsigned short arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)16337;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
