#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1297006933U;
unsigned int var_5 = 3431506906U;
unsigned int var_7 = 720665926U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 12331381327512024874ULL;
int var_17 = -1600226536;
int var_18 = 393966151;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
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
