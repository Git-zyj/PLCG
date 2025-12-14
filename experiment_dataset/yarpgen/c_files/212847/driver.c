#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
unsigned long long int var_3 = 2976660409393987267ULL;
long long int var_4 = 6768132321529069276LL;
int var_5 = -125814854;
unsigned short var_7 = (unsigned short)30657;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1428388289U;
unsigned short var_12 = (unsigned short)42730;
unsigned short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)57624;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
