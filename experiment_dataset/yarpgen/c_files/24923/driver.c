#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10416956673110900053ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)197;
unsigned int var_11 = 1704358598U;
int var_13 = 1214925441;
int zero = 0;
short var_15 = (short)17117;
unsigned int var_16 = 2096591968U;
long long int var_17 = 9123042468715445232LL;
signed char var_18 = (signed char)125;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3675507792240629453ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3030502885764745397LL;
}

void checksum() {
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
