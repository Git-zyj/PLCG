#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -545963496;
signed char var_4 = (signed char)33;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)23775;
signed char var_11 = (signed char)-35;
int zero = 0;
unsigned int var_13 = 507213805U;
unsigned long long int var_14 = 10121013830103453401ULL;
int var_15 = -1271323378;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2737585001042999630LL;
int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -967581177;
}

void checksum() {
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
