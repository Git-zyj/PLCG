#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 11972632919399639247ULL;
signed char var_10 = (signed char)-70;
long long int var_12 = -7347014028164560109LL;
int zero = 0;
unsigned long long int var_15 = 8129844601305776088ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 98333430U;
long long int var_18 = -7874089346978240146LL;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -9137605316745539438LL;
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
