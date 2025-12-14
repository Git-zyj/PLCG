#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4120441042U;
_Bool var_1 = (_Bool)1;
short var_4 = (short)25453;
unsigned char var_5 = (unsigned char)250;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)128;
unsigned int var_13 = 2279123693U;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)54558;
unsigned char var_18 = (unsigned char)57;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)50367;
unsigned short var_22 = (unsigned short)61115;
unsigned int var_23 = 3793462165U;
unsigned long long int var_24 = 2518741643886824791ULL;
_Bool var_25 = (_Bool)0;
unsigned short arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)32911;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
