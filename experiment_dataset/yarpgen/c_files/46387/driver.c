#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7018955915300015316LL;
long long int var_6 = 7332615207706713319LL;
unsigned short var_9 = (unsigned short)54115;
unsigned int var_13 = 1428871620U;
unsigned short var_14 = (unsigned short)26400;
int zero = 0;
short var_15 = (short)25478;
short var_16 = (short)-3787;
int var_17 = -198808510;
unsigned short var_18 = (unsigned short)11657;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)246;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
