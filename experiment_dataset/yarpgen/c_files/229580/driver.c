#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6845377222017025022LL;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-17170;
short var_8 = (short)12034;
int zero = 0;
long long int var_10 = -2258452623925423557LL;
long long int var_11 = 8511090098127454306LL;
unsigned int var_12 = 1996049608U;
long long int var_13 = -6431515714984623411LL;
int var_14 = 843685385;
short var_15 = (short)-3268;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
