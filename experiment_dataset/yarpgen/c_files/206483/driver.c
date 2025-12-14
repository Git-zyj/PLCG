#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
unsigned int var_12 = 2706220735U;
short var_14 = (short)16100;
unsigned short var_15 = (unsigned short)4547;
long long int var_17 = 7410739067004346409LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-32513;
int var_20 = 27711763;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)34189;
unsigned long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14945451447349945645ULL : 18369897440370001880ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
