#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15455070511168061011ULL;
unsigned int var_2 = 1654576968U;
unsigned long long int var_6 = 7082276599363135775ULL;
unsigned long long int var_7 = 3952893287614316460ULL;
unsigned int var_8 = 2573404088U;
int zero = 0;
unsigned long long int var_14 = 17947188685897884558ULL;
unsigned long long int var_15 = 7963723689878559414ULL;
unsigned long long int var_16 = 8805246983093678533ULL;
unsigned long long int var_17 = 13264163935865716396ULL;
_Bool arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
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
