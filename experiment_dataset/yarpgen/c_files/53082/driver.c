#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4392812100520669674LL;
unsigned long long int var_1 = 9866601437522627759ULL;
short var_2 = (short)-11691;
long long int var_3 = 613140271197132412LL;
short var_4 = (short)7726;
unsigned long long int var_5 = 6905257798827970604ULL;
unsigned int var_6 = 1531311150U;
unsigned long long int var_7 = 5340736771731422878ULL;
long long int var_9 = 1372414645530397234LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)52485;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)166;
long long int var_16 = 3209308659893200259LL;
_Bool var_17 = (_Bool)1;
_Bool arr_1 [23] ;
unsigned short arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)61017;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
