#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned short var_1 = (unsigned short)39;
unsigned long long int var_2 = 12680805437135425620ULL;
unsigned long long int var_3 = 17683851541989890711ULL;
signed char var_6 = (signed char)122;
unsigned int var_8 = 4179546161U;
unsigned int var_9 = 2962987426U;
unsigned int var_13 = 973544349U;
int zero = 0;
unsigned long long int var_16 = 16472973968660009809ULL;
unsigned int var_17 = 1383673226U;
signed char var_18 = (signed char)42;
signed char var_19 = (signed char)-94;
unsigned short var_20 = (unsigned short)12432;
unsigned long long int var_21 = 13401265587666080417ULL;
unsigned short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)60274;
}

void checksum() {
    hash(&seed, var_16);
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
