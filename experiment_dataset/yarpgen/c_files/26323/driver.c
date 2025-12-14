#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 300148879;
short var_8 = (short)31778;
unsigned int var_9 = 1027793008U;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_17 = (short)-6783;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)8;
_Bool var_20 = (_Bool)1;
int var_21 = -1826822813;
short var_22 = (short)-12308;
_Bool var_23 = (_Bool)0;
unsigned short arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)32700;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
