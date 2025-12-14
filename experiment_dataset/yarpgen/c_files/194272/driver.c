#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
short var_2 = (short)-31485;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)52822;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)-26;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-4712;
unsigned short var_19 = (unsigned short)11854;
_Bool var_20 = (_Bool)0;
unsigned short arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)29096;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
