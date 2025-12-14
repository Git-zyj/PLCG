#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23059;
long long int var_3 = 6191602131561994846LL;
unsigned short var_4 = (unsigned short)6611;
int var_17 = -683409745;
int zero = 0;
short var_20 = (short)28108;
unsigned long long int var_21 = 7477405522297760209ULL;
unsigned int var_22 = 2720431938U;
long long int var_23 = 3138784110704251591LL;
_Bool arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
