#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = -604318753;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2903089836U;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_14 = (short)-31728;
signed char var_15 = (signed char)49;
short var_16 = (short)13147;
long long int var_17 = -9169244293106577080LL;
unsigned int var_18 = 2074926758U;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 410081143 : 508277988;
}

void checksum() {
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
