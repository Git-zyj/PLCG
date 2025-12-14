#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 345402153U;
signed char var_5 = (signed char)99;
unsigned long long int var_6 = 18397675896570985667ULL;
long long int var_8 = 1942478899090135279LL;
int zero = 0;
unsigned int var_10 = 1771674801U;
int var_11 = 824878644;
signed char var_12 = (signed char)-123;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
