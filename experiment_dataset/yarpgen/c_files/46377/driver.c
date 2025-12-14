#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2725076826U;
long long int var_7 = 5459415608465935746LL;
short var_12 = (short)18927;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3734637435U;
unsigned int var_19 = 3978122464U;
int var_20 = -1012102557;
signed char var_21 = (signed char)-42;
signed char var_22 = (signed char)-121;
long long int var_23 = 11997950758911575LL;
_Bool var_24 = (_Bool)1;
unsigned int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 4070056002U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
