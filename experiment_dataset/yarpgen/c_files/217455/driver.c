#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1325915125;
unsigned int var_10 = 2432261991U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1986754631360549193LL;
unsigned int var_16 = 3122623972U;
int var_19 = 2137651778;
int zero = 0;
long long int var_20 = -4452638254619869414LL;
short var_21 = (short)12648;
unsigned char var_22 = (unsigned char)118;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 2198439248956181924ULL;
int var_25 = 962601846;
unsigned int arr_0 [22] ;
_Bool arr_1 [22] ;
unsigned int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3358696844U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1573791776U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
