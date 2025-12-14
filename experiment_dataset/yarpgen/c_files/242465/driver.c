#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4236174450U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2833324875929409165LL;
unsigned int var_8 = 3243373928U;
signed char var_12 = (signed char)-7;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)28509;
short var_16 = (short)-29046;
unsigned int var_17 = 2705841439U;
unsigned long long int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 9986429598583330350ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
