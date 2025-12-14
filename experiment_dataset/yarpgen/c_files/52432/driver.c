#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1781964731U;
signed char var_5 = (signed char)-19;
unsigned char var_6 = (unsigned char)240;
long long int var_7 = -2852501456591312062LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -5526935874963217767LL;
signed char var_10 = (signed char)54;
long long int var_12 = -3675799228976886340LL;
short var_13 = (short)19317;
int zero = 0;
int var_14 = 89845385;
int var_15 = 2114024295;
unsigned int var_16 = 3201372257U;
signed char var_17 = (signed char)114;
long long int var_18 = -5967215669203058459LL;
short arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-26346;
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
