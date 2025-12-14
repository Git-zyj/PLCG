#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6166168438130520082LL;
short var_2 = (short)32547;
unsigned short var_7 = (unsigned short)64230;
signed char var_8 = (signed char)-31;
int var_11 = -1829845059;
int zero = 0;
unsigned short var_12 = (unsigned short)26790;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)48396;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)59028;
unsigned short arr_1 [14] ;
_Bool arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)29910;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
