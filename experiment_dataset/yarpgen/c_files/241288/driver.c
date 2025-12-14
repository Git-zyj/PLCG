#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5905410607230921811LL;
unsigned int var_2 = 1623038704U;
unsigned long long int var_10 = 8306695997570692736ULL;
_Bool var_15 = (_Bool)1;
long long int var_17 = -6816624612760034771LL;
int zero = 0;
int var_18 = -1572682621;
long long int var_19 = -8767752241965646441LL;
int var_20 = 533239065;
unsigned int var_21 = 2716564571U;
long long int var_22 = 1610874765062010369LL;
int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 311501061;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
