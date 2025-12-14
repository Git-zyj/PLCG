#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -176046766;
unsigned short var_3 = (unsigned short)20679;
int var_4 = -535577110;
long long int var_5 = -2832430344296210282LL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)30382;
int var_11 = 1486397675;
int zero = 0;
short var_13 = (short)27462;
short var_14 = (short)20941;
long long int var_15 = 465707407968025990LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)5435;
signed char var_18 = (signed char)-7;
int arr_0 [17] ;
int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -634929257;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -632213917;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
