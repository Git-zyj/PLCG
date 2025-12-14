#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
_Bool var_2 = (_Bool)1;
unsigned int var_18 = 1342801244U;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = -2144145337;
unsigned long long int var_21 = 7639373865230074702ULL;
unsigned long long int var_22 = 10861879427916469256ULL;
unsigned long long int var_23 = 2887234073822556338ULL;
int var_24 = 645147454;
short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)13458;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
