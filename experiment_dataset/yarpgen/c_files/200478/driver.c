#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
signed char var_2 = (signed char)-127;
unsigned long long int var_5 = 733034416795179686ULL;
unsigned int var_6 = 3066402423U;
unsigned int var_8 = 1817510491U;
unsigned short var_10 = (unsigned short)9775;
unsigned short var_14 = (unsigned short)47660;
int zero = 0;
unsigned short var_19 = (unsigned short)414;
unsigned short var_20 = (unsigned short)62086;
unsigned short var_21 = (unsigned short)8475;
unsigned short var_22 = (unsigned short)567;
unsigned int var_23 = 1855283452U;
unsigned long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2061132734859215204ULL;
}

void checksum() {
    hash(&seed, var_19);
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
