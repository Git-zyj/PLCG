#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)30;
unsigned short var_2 = (unsigned short)54818;
long long int var_5 = 5757117716492912695LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)20511;
int zero = 0;
unsigned short var_12 = (unsigned short)3980;
unsigned int var_13 = 2643718054U;
long long int var_14 = 5944062646656869108LL;
int var_15 = 1979786938;
unsigned short var_16 = (unsigned short)55930;
unsigned short var_17 = (unsigned short)45971;
unsigned long long int arr_0 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 15154273966181709628ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
