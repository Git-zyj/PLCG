#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)30932;
int zero = 0;
unsigned long long int var_20 = 10438669056832064809ULL;
long long int var_21 = 5111880426262426541LL;
unsigned short var_22 = (unsigned short)56623;
long long int var_23 = -2652717466478730143LL;
long long int var_24 = -3255937964321977878LL;
unsigned long long int var_25 = 13355934866675427222ULL;
signed char arr_0 [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3751222754U : 905781167U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
