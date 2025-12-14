#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9411512830226312451ULL;
unsigned long long int var_4 = 16855242371256303081ULL;
unsigned short var_10 = (unsigned short)12894;
int zero = 0;
unsigned long long int var_11 = 178045986495199499ULL;
int var_12 = -1152628528;
unsigned short var_13 = (unsigned short)12749;
unsigned long long int var_14 = 15665833385738743740ULL;
short var_15 = (short)-23035;
_Bool arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
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
